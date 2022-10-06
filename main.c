#include <stdio.h>

// Pointers:
int main()
{
   int a = 10;
   int *ptra = &a; // --> & = address of operator
   printf("The value of a = %d\n", a);
   printf("The pointer address of a = %p\n", ptra);
   printf("The value of a = %d\n", *ptra);
   printf("The address of pointer = %p\n", &ptra);
   return 0;
}