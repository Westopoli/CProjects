#include <stdio.h>
#include <string.h>

int number_of_common_vowels(char *s1, char *s2);

int main()
{
    // char s1[51];
    // char s2[51];

    // strcpy(s1, "fun");
    // strcpy(s2, "programming");
    // printf("%s#%s\n", s1, s2);

    // strcpy(s1 + 1, "act");
    // printf("%s#%s\n", s1, s2);
    // strcat(s2 + 5, s1); // strcat looks for null character, not beginning of string, so the +5 is pointless 
    // printf("%s#%s\n", s1, s2);
    // strcpy(s1, s2 + 3);
    // printf("%s#%s\n", s1, s2);

    // printf("%s#%s\n", s1, s2);

    // One thing to take away from today is to write out the code and visualize what happens on paper 

    // String literals cannot be modified 
    // String literal: char *fruits[] = {"apple", "banana", "cherry"};
    // 


    // char *s1 = "education";
    // char *s2 = "audio";

    // printf("Number of common vowels: %d\n", number_of_common_vowels(s1, s2));




    return 0;
}

// blah

int number_of_common_vowels(char *s1, char *s2)
{
    int count = 0;
    char *vowels = "aeiou";
    char *p1, *p2;

    for (p1 = s1; *p1 != '\0'; p1++)
    {
        for (p2 = s2; *p2 != '\0'; p2++)
        {
            if (*p1 == *p2 && strchr(vowels, *p1) != NULL)
            {
                count++;
                break;
            }
        }
    }

    return count;
}