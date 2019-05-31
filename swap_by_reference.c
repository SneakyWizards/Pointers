#include <stdio.h>

void swap(int*, int*, int*);

int main()
{
    int a, b, c;
    // *x = 10, *y = 20;

    a = 10;
    b = 20;

    swap(&a, &b, &c);

    printf("== Swapped ==\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int *a, int *b, int *c){
    *c = *a;
    *a = *b;
    *b = *c;
}