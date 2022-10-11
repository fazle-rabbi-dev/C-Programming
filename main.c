#include <stdio.h>
#include <stdlib.h>

int demoFunc()
{
   int sum,a,b;
   a = 20;
   b = 30;
   sum = a+b;
   return &sum;
}

int main()
{
   float a = 77.88;
   int b = 99;
   // Void Pointer:
   void *ptr;
   ptr = &a;
   printf("The value of a is: %f\n", *((float*)ptr));
   ptr = &b;
   printf("The value of b is: %d\n", *((int*)ptr));
   
   // NULL Pointer:
   ptr = NULL;
   ptr = &a;
   printf("%f\n", *((float*)ptr));
   
   // Dangling Pointer:
   // 1. Deallocation of memory:
   int *demo = malloc(5*sizeof(int));
   free(demo);
   printf("%p\n", demo);
   
   // 2. Returning local variable address:
   int *result = demoFunc();
   printf("-> %p\n", result);
   return 0;
};