#include <stdio.h>
#define N 10

void max_min(int *a, int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

/* max_min finds the largest and smallest elements in array a of size n, and stores
the value in max and min by assigning them to *max and *min
*/
// a is an array, max and min are pointers
void max_min(int *a, int n, int *max, int *min)
{
// int i;
    int *p;
    //a is the same as &a[0], a+i is &a[i]
    *max = *min = *a; //a[0]
    for(p = a + 1; p < a + n; p++)
    // for(p = &a[1] ;p< &a[n];p++)
    // for(i = 1; i<n;i++)
    if(*p > *max) //p: &a[1], *p: *&a[1]-> a[1]
        *max = *p;
    else if(*p < *min)
        *min = *p;
}
