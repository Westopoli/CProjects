#include <stdio.h>
#include <string.h>

int main()
{
    // string.h
    // strlen - number of characters in a string 
        // length is different than capacity 
        // length measures the number of characters, not including the null character 
    // strcpy
    // strcat

    //strstr - search and detokenize (?)
    //strtok

    char s1[11] = "abc";
    char s2[21] = "def";

    // int size = strlen(s1);
    // printf("%d", size);

    // if(s1 == s2)
    //     printf("Same");
    // won't print same because their addresses are different, so even if their contents are the same the computer is comparing addresses 

    // strcat(s1, s2);
    // printf("%s", s1);

    printf("%d", strcmp(s1, s2));

    char planets[][8] = {"planets"};
    // first [] can be ommitted in C, that syntax is legal
    // but the second one is required, the number of columns 
    // think of it as walk before you fly (elevator analogy)

    char *planets[] = {"planets"};
    // each one is a string literal, not so many null characters taking up space (if that's what you want)

    return 0;
}