#include <stdio.h>
#include <string.h>
#include <math.h>

void modulus(int d, int m, int n);
 
int main(void)
{
    int n, i, userInput, mod;

    printf("Enter length of array: ");
    scanf("%d", &userInput);

    n = userInput; 
    int array[n];

    while ((userInput = getchar()) != '\n'); 
    printf("Enter number to modulus by: ");
    scanf("%d", &mod);

    while ((userInput = getchar()) != '\n'); 
    printf("Enter numbers of the sequence: ");

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    // for (i = 0; i < n; i++)
    //     printf("%d\n", array[i]);

    // printf("mod: %d", mod);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            modulus(mod, array[i], array[j]);
        }
    }

    return 0;
 }

void modulus(int d, int m, int n)
{
    int mod;
    m = m * m;
    n = n * n;
    // printf("Squared: (%d, %d)\n", m, n);

    mod = n % d;
    if(m == mod)
    {
        // printf("if %d = %d\n", m, mod);
        m = sqrt(m);
        n = sqrt(n);
        printf("(%d, %d)\n", m, n);
    }
        
    
}