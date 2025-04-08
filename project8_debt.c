#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NAME_LEN 30

struct debt{
	char company[NAME_LEN+1];
	double balance;
	double minimum;
	double interest_rate;
	struct debt *next;
};


struct debt *add_to_list(struct debt *list);
void search_list(struct debt *list);
void print_list(struct debt *list);
void clear_list(struct debt *list);
int read_line(char str[], int n);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
  char code;

  struct debt *debt_list = NULL;  
  printf("Operation Code: a for adding to the list, s for searching"
	  ", p for printing the list; q for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': debt_list = add_to_list(debt_list);
                break;
      case 's': search_list(debt_list);
                break;
      case 'p': print_list(debt_list);
                break;
      case 'q': clear_list(debt_list);
		return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

struct debt *add_to_list(struct debt *list){

  //add your code
  //return NULL; statement is placed here for the skeleton program to compile
  //remove return NULL; statement when you add your code 
  return NULL;
}

void search_list(struct debt *list){

 //add your code

}


void print_list(struct debt *list){
  //keep the printf statement in your program. Do NOT remove.
  printf("company                          balance     minimum    interest\n");
  //add your code

}
void clear_list(struct debt *list)
{

  //add your code

}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  str[i++] = ch;
  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
    
   }
   str[i] = '\0';
   return i;
}
