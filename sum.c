#include <stdio.h>

int sum (int (*f) (int), int start, int end);
int fact(int n);
int square(int n);
int cube(int n);

int main()
{
	int start, end;
	printf("Enter start value: ");	
	scanf("%d", &start);
	printf("Enter end value: ");
	scanf("%d", &end);
	
	printf("Sum of factorials from %d to %d is %d\n", start, end, sum(fact, start, end));
	printf("Sum of squares from %d to %d is %d\n", start, end, sum(square, start, end));
	printf("Sum of cubes from %d to %d is %d\n", start, end, sum(cube, start, end));

	return 0;
}

int sum (int (*f) (int), int start, int end)
{
	int i, total = 0;
	for (i = start; i <= end; i++)
		total += f(i);
	return total;
}

int fact(int n)
{
  if (n <= 1) 
    return 1;
  else
    return n * fact(n - 1);
}

int square(int n)
{
  return n*n;
}

int cube(int n)
{
  return n*n*n;
}
