#include <stdio.h>
#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

//find the largest and the second largest value in an array
int main()
{
    int i, max, second_max;
    int a[N];

    printf("Enter %d elements for the arary: ", N);

    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }

    find_two_largest(a, N, &max, &second_max);
    printf("The largest value is: %d and the second largest is: %d\n", max, second_max);

    return 0;
}
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i = 0;
    *largest = a[i];
    *second_largest = a[i - 1];

    for(i = 0; i < n; i++)
    {
        if(a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i] < *largest)
        {
            if(a[i] > *second_largest)
            {
                *second_largest = a[i];
            }
        }
    }
}
