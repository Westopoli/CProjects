#include <stdio.h>
#include <string.h>
 
void swap(char *a, char *b);

 int main(void)
{
    char w[3][4] = {"dog", "rat", "cat"};

    for(int I = 0; I < 3; I++) 
	{
		for(int j = 0; j < 3; j++)
		{
			char *a = w + I;
			char *b = w + j;
			if(strcmp(a, b) < 0)
				swap(a, b);
		}
	}	

    return 0;

 }
 
 void swap(char *a, char *b) 
    {
    char tmp[4];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}