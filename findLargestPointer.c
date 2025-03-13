#include <stdio.h>
#define N 10 

int * findLargest(int a[], int n); // declaration 

int main(void)
{
    int i;
    int a[N];

    printf("Enter %d elements for the array: ", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int *p = findLargest(a, N);
    printf("The largest value is: %d", *p);

    return 0;
}

int * findLargest(int a[], int n) // definition
{
    int indexLargest = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[indexLargest])
        {
            indexLargest = i;
        }
    }
    return &a[indexLargest];
}
