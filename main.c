#include <stdio.h>

/*
Author: Fazle Rabbi
Date  : 06 October, 2022
*/

int factorial(number)
{
   if(number == 0 || number == 1){
      return 1;
   }
   else{
      return (number * factorial(number - 1));
      /*
         number = 3;
         3 * factorial(2);
         3 * 2 * factorial(1);
         3 * 2 * 1; --> Since, if condition exist!
      */
   }
}

int main()
{  
   int r;
   r = factorial(3);
   printf("The result is = %d", r);
   // End of program
   printf("\n");
   return 0;
}