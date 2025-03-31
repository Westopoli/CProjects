#include <stdio.h>

#define N 100
 
int main()
{
    char content[N + 1];
    FILE *fp = fopen("test1.txt", "r"); // r is read
    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while(fgets(content, N + 1, fp) != NULL)
    {
        printf("%s", content);
    }

    FILE *fp2 = fopen("test3.txt", "w");
    if(fp2 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // this function changed the file content from "abcdefg" to what it is now 
    char str_arr[4][N + 1] = {"ab", "cd", "ef", "g"};
    for(int i = 0; i < 4; i++)
    {
        fputs(str_arr[i], fp2);
        fputs("\n", fp2); 
    }

    fclose(fp); // don't usually try to catch return value, if something is wrong it's usually with the file itself 
    fclose(fp2);
    return 0;
 }