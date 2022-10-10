#include <stdio.h>
#include "tmp.c"

/*
Storage Class:
--> Auto
--> Extern
--> Static
--> Register
*/

int sum = 300;

int demo(int a, int b)
{
   extern int sum;
   // sum = a+b;
   return sum;
}

void demo2()
{
   register int a = 20;
   printf("A is: %d\n", a);
}

int main(){
   int a=10,b=20;
   int sum = demo(a,b); 
   printf("Sum is: %d\n", sum);
   printf("X is: %d\n", x);
   demo2();
   return 0;
};