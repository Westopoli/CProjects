#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
int duplicates(struct node *list);
void clear_list(struct node *list);
struct node *find_largest(struct node *list);
struct node *delete(struct node *list, int n);
struct node *add_to_middle_of_list(struct node *list, int n);

struct node {
	int value;          /* data stored in the node  */
	struct node *next;  /* pointer to the next node */
};

int main()
{

 	struct node *first = NULL;
	struct node *largest = NULL;
	int numDuplicates;

	/* inserting nodes */
	first = add_to_list(first, 3);
	first = add_to_list(first, 64);
	first = add_to_list(first, 98);
	first = add_to_list(first, 3);
    first = add_to_list(first, 64);
	first = add_to_list(first, 3);
	first = add_to_list(first, 136);

	print_list(first);
	
	largest = find_largest(first);
	numDuplicates = duplicates(first);

	// print the number of duplicates
	if(numDuplicates > 0)
		printf("There are %d duplicates in the list\n", numDuplicates);
	else
		printf("There are no duplicates in the list\n");

	// print the largest node
	if(largest != NULL)
		printf("The largest node is %d\n", largest->value);
	else
		printf("The list is empty\n");
 	
	first = add_to_middle_of_list(first, 50);
	print_list(first);

	
	clear_list(first);
	return 0;

}

struct node *add_to_list(struct node *list, int n)
{
	  struct node *new_node;
	
	  new_node = malloc(sizeof(struct node));
	  if (new_node == NULL) {
	    printf("malloc failed in add_to_list\n");
	    return list;
	  }
	  new_node->value = n;
	  new_node->next = list;
	  return new_node;
}

struct node *add_to_middle_of_list(struct node *list, int n)
{
	  struct node *new_node, *prev, *curr;
	
	  new_node = malloc(sizeof(struct node));
	  if (new_node == NULL) {
	    printf("malloc failed in add_to_list\n");
	    return list;
	  }
	  new_node->value = n;
	  
	  for(prev = NULL, curr = list; curr != NULL && 
			new_node->value > curr->value;
		prev = curr, curr = curr->next);

	if(prev == NULL)
	{
		new_node->next = curr;
		return new_node;
	}
	else
	{
		new_node->next = curr;
		prev->next = new_node;
		return list;
	}
}

struct node *delete(struct node *list, int n)
{
	struct node *prev, *curr;

	for(prev = NULL, curr = list; curr != NULL && curr->value != n; prev = curr, curr = curr->next);
	
	if(curr == NULL) // n is not found or list is empty
		return list; 
	if(prev == NULL)
		list = list->next; 
	else
		prev->next = curr->next;
	free(curr);
	return list; 
	
}

struct node *search_list(struct node *list, int n)
{
	  struct node *p;
	
	  for (p = list; p != NULL; p = p->next)
	    if (p->value == n)
	      return p;
	  return NULL;
}

void print_list(struct node *list)
{
	struct node *p;
	for(p= list; p!=NULL; p = p->next)
		printf("%d\t", p->value);
	printf("\n");
}


void clear_list(struct node *list)
{
  struct node *p;
  while(list != NULL)
  {
	 p = list;
     list = list->next;
     if( p!= NULL)
           free(p);
  }
}

struct node *find_largest(struct node *list)
{
	struct node *p = list;
	struct node *largest = list;
	for(p = list; p != NULL; p = p->next)
	{
		if(p->value > largest->value)
			largest = p;
	}
	return largest;
}

int duplicates(struct node *list){
       struct node *p, *q;
	   int count = 0;
	   for(p = list; p != NULL; p = p->next){
		   for(q = p->next; q != NULL; q = q->next){
			   if(p->value == q->value){
				   count++;
				   break;
			   }
		   }
	   }
       return count;
}
