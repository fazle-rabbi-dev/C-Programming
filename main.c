#include <stdio.h>

typedef struct StudentInfo
{
  int id;
  int rool;
} SI;

int main(){
   int a = 10;
   typedef int integer;
   integer b = 20;
   printf("The value of b is: %d\n", b);
   printf("\n");
   
   // 
   SI s1;
   s1.id = 100;
   printf("Id of student is %d\n", s1.id);
   return 0;
};