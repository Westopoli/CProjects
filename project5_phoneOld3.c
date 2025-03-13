#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 14

void convert(char *input, char *output);
int read_line(char *string, int n);
char isDigit(char input);

int digits;

int main()
{
    char input[MAX_LENGTH];
	char output[MAX_LENGTH+1];
	
	// Get user input
	printf("Enter input: ");
    read_line(input, MAX_LENGTH);

	convert(input, output);

	printf("Output: %s\n", output);

    return 0;
}

void convert(char *input, char *output)
{
	char *indexPointer;
	char *outputPointer = output;
	int size = strlen(output);

	for(indexPointer = input; *indexPointer != '\0'; indexPointer++)
	{
		if(*indexPointer == '(' || *indexPointer == ')' || *indexPointer == '-')
		{
			*outputPointer = *indexPointer;
			printf("Output: %s\n", output);
			size = strlen(output);
			printf("Length: %d\n", size);
		}
		else if(digits < 3)
		{
			if(isDigit(*indexPointer))
			{
				*outputPointer = *indexPointer;
				digits++;
				printf("Output: %s\n", output);
				size = strlen(output);
				printf("Length: %d\n", size);
			}
		} 
		else if(digits >= 3)
		{
			switch(*indexPointer)
			{
				case 'A':
				case 'B': 
				case 'C':
					*outputPointer = '2';
					break; 
				case 'D':
				case 'E':
				case 'F':
					*outputPointer = '3';
					break;
				case 'G':
				case 'H':
				case 'I':
					*outputPointer = '4';
					break; 
				case 'J':
				case 'K':
				case 'L':
					*outputPointer = '5';
					break; 
				case 'M':
				case 'N':
				case 'O':
					*outputPointer = '6';
					break; 
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
					*outputPointer = '7';
					break;
				case 'T':
				case 'U':
				case 'V':
					*outputPointer = '8';
					break;
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					*outputPointer = '9';
					break; 
				default:
					break;
			}
			printf("Output: %s\n", output);
			size = strlen(output);
			printf("Length: %d\n", size);
		}
		outputPointer++;
	}
}

// This function reads the user input and adds it to an array to create a string
int read_line(char *string, int n)
{
    int character, i = 0;

	// Ignores whitespace before the user enters any actual characters
    while((character = getchar()) == ' ');

    // The first character will terminate the loop, but it needs to be stored before we call getchar() again, or else we'll lose it
    *string++ = toupper(character);
    i++;

    while ((character = getchar()) != '\n')
    { 
        if (i < n)
        { 
            *string++= toupper(character);
            i++;
        }
    }

    *string = '\0'; /* terminates string */
    return i; /* number of characters stored */
}

char isDigit(char input)
{
	if(((int)input >= '0') && ((int)input <= '9'))
		return 1;
	else
		return 0;
}