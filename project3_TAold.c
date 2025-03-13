// Westley Yarlott
// This program takes the user input of the number of TAs that have been assigned and outputs the singular TA number that has not been assigned 

#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	int userInput;
	int numberOfTAs;
	int i;
	int j;
	int count; 
	int missingNumber = 0;
	int temp; 
	

	// int count = 0;
	// int missingNumber;	 

	printf("Enter number of TAs: ");
	scanf("%d", &userInput);
	numberOfTAs = userInput - 1;
	int TAs[numberOfTAs];

	printf("%d\n", numberOfTAs);

	while ((userInput = getchar()) != '\n'); 
	// // clear leftover characters in input buffer 
	printf("Enter TAs already assigned: ");

	for(i = 0; i < numberOfTAs; i++)
	{
		scanf("%d", &TAs[i]);
	}

	int numberOfElements = sizeof(numberOfTAs) / sizeof(numberOfTAs[0]);
	qsort(numberOfTAs, numberOfElements, sizeof(numberOfTAs[0]), comp); // qsort program found in class files :))))))

	// for(i = 0; i < numberOfTAs; i++)
	// {
	// 	count = 0;
	// 	for(j = 1; j < numberOfTAs; j++)
	// 	{
	// 		if(TAs[i] != j)
	// 		{
	// 			count++;
	// 		}
	// 		printf("Iteration: %d\t J: %d\t TAs[i]: %d\t Count: %d\n", i, j, TAs[i], count);
	// 	}
	// 	if(count == numberOfTAs)
	// 	{
	// 		missingNumber = j;
	// 		printf("Missing Number: %d\n", missingNumber);
	// 	}
	// }

	printf("\n");
	for(i = 0; i < numberOfTAs; i++)
	{
		printf("%d ", TAs[i]);
	}

	printf("TA has not been assigned: %d\n", missingNumber);

	return 0;
}
