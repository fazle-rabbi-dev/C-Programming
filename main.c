#include <stdio.h>

int main(){
   int a,b,c;
   printf("Enter the two number:");
   scanf("%d %d", &a,&b);
   if(a > b){
      c = a;
   }
   else{
      c = b;
   }
   again: if(c % a == 0 && c % b == 0){
      printf("The (LCD) of %d and %d is:%d\n", a,b,c);
   }
   else{
      c+=1;
      goto again;
   };
   return 0;
};