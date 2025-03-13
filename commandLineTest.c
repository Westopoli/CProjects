#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i; 
    int a[argc - 1];

    if(argc > 1)
    {
        for(i = 0; i < argc - 1; i++)
        {
            a[i] = *argv[i];
        }

        for(i = 0; i < argc - 1; i ++)
            printf("%d\n", a[i]);
        printf("\n");
        
    }
    else 
        printf("Usage: ./a.exe folowed by numbers"); 

    return 0;
}