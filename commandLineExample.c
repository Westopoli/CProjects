#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selection_sort(int a[], int n);
int find_largest(int a[], int n);

int main(int argc, char *argv[])
{
    int i; 
    int a[argc - 1];

    if(argc > 1)
    {
        for(i = 0; i < argc - 1; i++)
        {
            a[i] = atoi(argv[i + 1]);
        }

        selection_sort(a, argc-1);

        for(i = 0; i < argc - 1; i ++)
            printf("%d\n", a[i]);
        printf("\n");
        
    }
    else 
        printf("Usage: ./a.exe folowed by numbers"); 

    return 0;
}

// This recursive function sorts the array from smallest to largest
void selection_sort(int a[], int n)
{
    int index_largest = 0, temp;

    // The other function will iterate down the array till n is 1
    if (n == 1)
    {
        return;
    }

    index_largest = find_largest(a, n);

    // The largest value of the array is always put at the end, since it's sorted from largest to smallest
    temp = a[index_largest];
    a[index_largest] = a[n - 1];
    a[n - 1] = temp;

    selection_sort(a, n - 1);

}

// 
int find_largest(int a[], int n)
{
    int largest = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > a[largest])
        {
            largest = i;
        }
    }
    return largest;
}