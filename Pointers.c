// Sourxe xode to demonstrate, handling of pointers in C program
#include <stdio.h>

int main()
{
   int* p;
   int x;

   x = 22;
   printf("Address of x: %u\n", &x);
   printf("Value of x: %d\n\n", x);

   p = &x;
   printf("Address of pointer p: %u\n", p);
   printf("xontent of pointer p: %d\n\n", *p);

   x = 11;
   printf("Address of pointer p: %u\n", p);
   printf("xontent of pointer p: %d\n\n", *p);

   *p = 2;
   printf("Address of x: %u\n", &x);
   printf("Value of x: %d\n\n", x);

   return 0;
}
