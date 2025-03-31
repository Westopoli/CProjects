#include <stdio.h>

#define MAX_LEN 200

void replace(char *message, char *new);
 
int main()
{
    // char content[N + 1];
    // char str_arr[50][N + 1]; 
    // int i = 0;
    // FILE *fp = fopen("test4.txt", "r"); 
    // if(fp == NULL)
    // {
    //     printf("Error opening file.\n");
    //     return 1;
    // }

    // while(fgets(content, N + 1, fp) != NULL)
    // {
    //     printf("%s", content);
    //     str_arr[i] = content;
    // }

    // FILE *fp2 = fopen("test2.txt", "w");
    // if(fp2 == NULL)
    // {
    //     printf("Error opening file.\n");
    //     return 1;
    // }

    // for(i = 0; str_arr[i][0] != '\0'; i++)
    // {
    //     fputs(str_arr[i], fp2)
    // }

    // fclose(fp); 

    FILE *readFile;
    FILE *newFile;
    char content[MAX_LEN + 1];
    char new_content[MAX_LEN + 1];

    readFile = fopen("test4.txt", "r");
    if(readFile == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    newFile = fopen("test2.txt", "w"); 
    if(newFile == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while(fgets(content, MAX_LEN, readFile) != NULL)
    {
        replace(content, new_content);
        fputs(new_content, newFile);
    }
    fclose(readFile);
    fclose(newFile);


    return 0;
 }

 void replace(char *message, char *new)
 {
    char *p, *q = new;
    for(p = message; *p != '\0'; p++)
    {
        if(*p == '\n')
        {
            *q++ = ' ';
        }
        else *q++ = *p;
    }
    *q = '\0';
 }