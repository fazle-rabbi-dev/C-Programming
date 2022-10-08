#include <stdio.h>
#define PI = 3.14;

int a = 990; 

int demo(int a1)
{  
   static int tmp = 0;
   printf("Before tmp is: %d\n", tmp);
   tmp ++;
   return tmp;
}

int main()
{
   int a = 10;
   int b = 10;
   printf("%d\n", a);
   int test = demo(a);
   test = demo(a);
   test = demo(a);
   test = demo(a);
   test = demo(a);
   // static int x = demo(a); // --> Throw error
   return 0;
};