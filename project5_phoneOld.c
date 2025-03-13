// Westley Yarlott
// This program converts the letters in a phone number the user enters to their numerical equivalent, skipping the area code. 

#include <stdio.h>
#include <ctype.h>

#define StandardLetters 7
#define EntrySize 13
#define AreaCodeDigits 3

char isAlpha(char input);
char isDigit(char input);
int read_line(char *string, int n);
int digits = 0;

int main()
{
	// Initialize necessary variables 
	char userNumber[EntrySize];
	char *userNumberPointer = userNumber;
	int letters = 0;

	printf("Enter phone number: ");

	// This loop reads the user input and adds it to the userNumber array, as well as recording the number of letters and digits with respective counters
	do
	{
		*userNumberPointer = toupper(getchar());
		if(isDigit(*userNumberPointer))
			digits++;
		
		if(isAlpha(*userNumberPointer))
			letters++;
		
		userNumberPointer++;
	}while (letters < StandardLetters);

	read_line(userNumber, EntrySize);

	for(userNumberPointer = userNumber; *userNumberPointer != '\0'; userNumberPointer++)
	{
		printf(" %c", *userNumber);
	}

	
	
	// This loop goes through the array. Every letter gets changed to its associated number with the switch statement
	for(userNumberPointer = userNumber; userNumberPointer < userNumber + EntrySize; userNumberPointer++)
	{
		// This if statement bypasses the area code the user enters
		if(digits == AreaCodeDigits)
			switch(*userNumberPointer)
			{
				case 'A':
				case 'B': 
				case 'C':
					*userNumberPointer = '2';
					break; 
				case 'D':
				case 'E':
				case 'F':
					*userNumberPointer = '3';
					break;
				case 'G':
				case 'H':
				case 'I':
					*userNumberPointer = '4';
					break; 
				case 'J':
				case 'K':
				case 'L':
					*userNumberPointer = '5';
					break; 
				case 'M':
				case 'N':
				case 'O':
					*userNumberPointer = '6';
					break; 
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
					*userNumberPointer = '7';
					break;
				case 'T':
				case 'U':
				case 'V':
					*userNumberPointer = '8';
					break;
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					*userNumberPointer = '9';
					break; 
				default:
					break;
			}

		// These if statements print only the digits, alphabetic charaters, and specified special charaters such as parentheses and dashes that are 
		// typically inlucded in phone numbers from the userNumber array. 
		if(isDigit(*userNumberPointer))
			printf("%c", *userNumberPointer);		
		
		if(isAlpha(*userNumberPointer))
			printf("%c", *userNumberPointer);
		
		if(*userNumberPointer == '(' || *userNumberPointer == ')' || *userNumberPointer == '-')
			printf("%c", *userNumberPointer);
		
	}
	printf("\n");
	
	return 0;
}

void convert(char *input, char *output)
{

}

char isAlpha(char input)
{
	if(((int)input >= 'A') && ((int)input <= 'Z'))
		return 1;
	else
		return 0;
}

char isDigit(char input)
{
	if(((int)input >= '0') && ((int)input <= '9'))
		return 1;
	else
		return 0;
}

// This function reads the user input and adds it to an array to create a string
int read_line(char *string, int n)
{
    int character, i = 0;

	// Ignores whitespace before the user enters any actual characters
    while((character = getchar()) == ' ');

    // The first character will terminate the loop, but it needs to be stored before we call getchar() again, or else we'll lose it
    *string++ = character;
    i++;
	if(isDigit(character))
		digits++;

    while ((character = getchar()) != '\n')
    { 
        if (i < n)
        { 
            *string++= character;
            i++;
			if(isDigit(character))
				digits++;
        }
    }

    *string = '\0'; /* terminates string */
    return i; /* number of characters stored */
}