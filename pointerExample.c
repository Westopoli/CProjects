#include <stdio.h>

int main(void)
{
   int* p;
   int* q;

   int i = 4;
   int j = 6;

    p = &i;
    q = &j;

    printf("i: %d\t *p: %p\n", i, p);

    printf("&i: %p\t p: %d\n", &i, *p);

    *p = 32;

    printf("i: %d\t p: %p\n", i, p);

    p = q;

    printf("i: %d\t j: %d\t *p: %p\t *q: %p\n", i, j, p, q);

    return 0;
}