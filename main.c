#include <stdio.h>

void startPrint(int num)
{
   for(int i=0;i<num;i++){
      for(int j=0;j<=num-i-1;j++){
         printf("*");
      }
      printf("\n");
   }
}

int main()
{
   int num;
   printf("Enter an amount for print the start:");
   scanf("%d", &num);
   startPrint(num);
   return 0;
}