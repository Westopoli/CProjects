#include <stdio.h>
#include <string.h>
 
void selection_sort(int a[], int n);
int find_largest(int a[], int n);

int main(void)
{
        int a[100];
        int count = 0; 

        FILE *fp = fopen("numbers.txt", "r");
        if(fp == NULL)
        {
            printf("Error opening file.");
            return 1;
        }

        while(!feof(fp) && !ferror(fp))
        {
            if(fscanf(fp, "%d", &a[count]) == 1)
            {
                count++;
            }
        }

        selection_sort(a, count);

        FILE *wFile = fopen("numbers_sorted.txt", "w");
        if(wFile == NULL)
        {
            printf("Error opening file.\n");
            return 1;
        }

        for(int i = 0; i < count; i++)
        {
            fprintf(wFile, "%d\n", a[i]);
        }

    printf("There are %d numbers in total.\n", count);
    fclose(fp);
    

    return 0;
 }

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