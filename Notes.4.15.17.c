#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    // Linked lists continued 
        // deleting a node
        // maintaing order 
        // example: stack

    // Deleting a node 
        // locate the node to be deleted
        // keep track of two pointers, previous and current
            // prev-> next = curr->next
            // free(curr)

    // Function pointers
        // building blocks for polymorphism
            // polymorphism: same function name, different behavior
    // int (*pFunction) (double)
        // int is the return type of the function
        // *pFunction is the name of the pointer
        // third area will point to functions that have one paramater of type double 
        // f(x) or (*f)(x) will work as sytax

    // on exam 
        // given function definition 
        // write function call
        // --------- 
        // calculate integral of sqrt from a to b, define integral function for me 

    // qsort -> good reading from textbook, will be learning about it in data structures 
        // capable of sorting any array 
        // void * -> generic pointer, can point to any data type
        // prototype: 
        // void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));

    // char** pointer to string 
        // *(char **)p -> convert the type and gives you the actual string 

    

    return 0;
 }

 