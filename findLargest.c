#include <stdio.h>
#define N 10 

int findLargest(int a[], int n); // declaration 

int main(void)
{
    int i;
    int a[N];

    printf("Enter %d elements for the array: ", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int index = findLargest(a, N);
    printf("the largest value is: %d at index %d", index, indexLargest);

    return 0;
}

int findLargest(int a[], int n) // definition
{
    int indexLargest = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i] > a[indexLargest])
        {
            indexLargest = i;
        }
    }
    return = largest;
}
