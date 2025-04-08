#include <stdio.h>
#include <string.h>

#define NUM_CHARS 30

struct magformer{
    char shape[NUM_CHARS + 1];
    char color[NUM_CHARS + 1];
    int quantity;
};
 
int compare(struct magformer m, struct magformer n);

int main(void)
{
    // structures are the topic for today, structures are predecesor of classes
    // struct part {
    // int number; 
    // char name[21];
    // int on_hand;
    // };
    // semicolon must follow the right brace

    // can create "instances", though they aren't instances in C, we just call them variables
    // struct part part1, part2;// struc part part1, part2; 

    struct magformer m1 = {"square", "pink", 5};
    struct magformer m2; 
    printf("Enter shape: ");
    scanf("%s", m2.shape); // dot operator allows us to access the members of the structure
    printf("Enter color: ");
    scanf("%s", m2.color);
    printf("Enter quantity: ");
    scanf("%d", &m2.quantity);

    printf("%s %s %d\n", m2.shape, m2.color, m2.quantity);
    
    // m2 = m1 does work as opposed to arrays a = b. Predefined in C. 
    // m2 == m1 is not defined, same with !=, won't be able to compare member by member for a structure

    if(compare(m1, m2))
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
 }

 int compare(struct magformer m, struct magformer n)
 {
    if (strcmp(m.shape, n.shape) == 0 && strcmp(m.color, n.color) == 0)
        return 1;
    else
        return 0;
 }
