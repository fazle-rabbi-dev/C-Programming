#include <stdio.h>

int main(){
   int a = 10;
   int *ptr;
   ptr = &a; // address of a stored in variable ptr
   printf("%d\n", *ptr);
   return 0;
};