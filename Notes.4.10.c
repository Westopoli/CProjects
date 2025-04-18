#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next; 
};

void print_list(struct node *list);
struct node *add_to_list(struct node *list, int n);
 
int main(void)
{
    // Linked lists 
        // Example: 
            // struct node {
            //    int data;
            //    struct node *next; // pointer to the next node
            // };
        // takes longer to access the data in a linked list than an array (have to travel down list)
        // data structures will go into linked lists more 

        // -> assumes the value in the front is a pointer (combination of * and .)    

    struct node *list = NULL;
    list = add_to_list(list, 76); 
    list = add_to_list(list, 71); 
    list = add_to_list(list, 54); 
    list = add_to_list(list, 16); 

    print_list(list); // print the list

    return 0;
 }

 struct node *add_to_list(struct node *list, int n) { 
    struct node *new_node = malloc(sizeof(struct node)); 
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return list; // return the original list if memory allocation fails
    }
    new_node->value = n; // initialize the value of the new node
    new_node->next = list; // point the new node to the current head of the list
    // return list; adding to the end
    return new_node; // addign to the beginning 
 }

 void print_list(struct node *list) {
    struct node *current = list; // start from the head of the list
    for( ; current != NULL; current = current->next) {
        printf("%d ", current->value); // print the value of the current node
    }
 }