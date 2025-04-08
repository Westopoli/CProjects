#include <stdio.h>
#include <string.h>

struct dog create_dog(char *name, char *owner_name, int num_nights);
double calculate_cost(struct dog d);

struct dog
{
    char name[30];
    char owner_name[30];
    int num_nights;
};
 
int main()
{
    struct dog dog1 = {"Rocky", "Joe", 3};
    printf("Dog name: %s\t Owner name: %s\t Nights: %d", dog1.name, dog1.owner_name, dog1.num_nights);

    struct dog dog2; 
    printf("\nEnter dog name: ");
    scanf("%s", dog2.name);
    printf("Enter owner name: ");
    scanf("%s", dog2.owner_name);
    printf("Enter number of nights: ");
    scanf("%d", &dog2.num_nights);
    printf("Dog name: %s\t Owner name: %s\t Nights: %d\n", dog2.name, dog2.owner_name, dog2.num_nights);

    struct dog dog3 = create_dog("yoyo", "Julia", 5);
    double cost = calculate_cost(dog3);

    printf("The cost for %s is: %.2f\n", dog3.name, cost);

    return 0;
 }

 struct dog create_dog(char *name, char *owner_name, int num_nights)
 {
    struct dog d;
    strcpy(d.name, name);
    strcpy(d.owner_name, owner_name);
    if(num_nights < 0)
        num_nights = 0;
    
    d.num_nights = num_nights;
    return d;
 }

 double calculate_cost(struct dog d)
 {
    double cost = 0.0;
    if(d.num_nights > 0)
        cost = d.num_nights * 35.0;
    return cost;
 }