#include <stdio.h>

#define STR_LEN 50

int read_line(char *str, int n);
void concatenate(char *s1, char *s2);

int main()
{
    //char *s1 = "string"; // string literal (length can't be changed)

    // char s1[41]; // (up to 40 characters)
    // char s2[21];

    // printf("Enter a word: ");
    // scanf("%s", s1); // string names are pointers themselves, you don't need & for scanf

    // printf("Enter a word: ");
    // read_line(s1, 40);

    // printf("Enter another word: ");
    // read_line(s2, 20);

    // concatenate(s1, s2);
    // printf("%s", s1);

    // There needs to be room left in the definition of the size for the null character
    // char date3[7] = "June 14"; --> This would not work, not enough room for the null character 

    int num_chars;
    char sen[STR_LEN+1];

    printf("Enter a sequence: ");
    num_chars = read_line(sen, STR_LEN);
    
    printf("You entered: %s, it has %d characters", sen, num_chars);

    return 0;
}

void concatenate(char *s1, char *s2)
{
    char *p, *q;

    for(p = s1; *p != '\0'; p++);
    // p points to null character when loop finishes
    for(q = s2; *q != '\0'; q++)
        *p++ = *q;
    
    *q = '\0'; // terminate the string 

}

int read_line(char *str, int n)
{
    int ch, i = 0;

    while((ch = getchar()) == ' ');

    // first character will terminate loop, but we need to store it before we call getchar() again, or else we'll lose it
    *str++ = ch;
    i++;

    while ((ch = getchar()) != '\n')
    { 
        if (i < n)
        { 
            *str++= ch;
            i++;
        }
    }

    *str = '\0'; /* terminates string */
    return i; /* number of characters stored */
}