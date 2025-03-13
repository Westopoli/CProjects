#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i; 
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    if(argc >= 2)
    {
        for(i = 0; i < 8; i++)
        {
            if(strcmp(argv [1], planets[i]) == 0)
            {
                printf("It is a planet");
                break;
            }
        }

        if(i == 8)
            printf("It is not a planet");
    }
    else 
        printf("Usage: ./a.exe planet\n");

    return 0;
}