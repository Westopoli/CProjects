#include <stdio.h>
#include <string.h>
// new 
#include <stdlib.h>
 
int main(void)
{
    // linked lists use pointers, structures, a new pointer, it's more complicated
    // Final is 70% material from the second half on the semeseter
    // linked list will be talked about next class (do project 8 over weekend)
    
    // Dynamic storage allocation 
        // types of memory
            // stack - local  variables
            // heap - dynamically allocated memory
                // shared runtime (other programs are using the heap too, can cause problems)
            // static data (global variables)
            // code - program instructions

    // sizeof() operator - returns the size of a type in bytes
        // takes "type name" as input         

    // free(str); // free the allocated memory
    // memory leak can happen if you don't free the memory from the heap 
        // p malloc
        // q malloc
        // p = q -> memory leak, lost track of p block 
        // free(p) would free the memory and allow you to use p
    // dangling pointer 

    // qsort stands for quick sort (faster sorting algorithm)

    // fixed size 
    int arr[50];

    // variable length
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n]; 

    // dynamic memory allocation
    int *b;
    // b = malloc(4*n); // 4 is the number of bytes for each integer 
    b = malloc(n * sizeof(int)); // malloc() returns a pointer to the allocated memory
    // void * can be converted to any type of pointer
    if(b == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // exit the program with an error code
    }

    int i; 
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("You entered: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
 }