#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
    char *str; 
    char buffer[101];
    printf("Enter a word: ");
    scanf("%s", buffer); // read a string from the user
    int size = strlen(buffer); // get the length of the string

    str = malloc((size + 1) * sizeof(char)); // allocate memory for the string
    if (str == NULL) { // check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1; // exit the program with an error code
    }
    strcpy(str, buffer); // copy the string to the allocated memory
    printf("You entered: %s\n", str); // print the string

    free(str); // free the allocated memory
    // memory leak can happen if you don't free the memory from the heap 
        // p malloc
        // q malloc
        // p = q -> memory leak, lost track of p block 
        // free(p) would free the memory and allow you to use p
    // dangling pointer 


    return 0;
 }