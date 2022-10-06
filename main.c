#include <stdio.h>

/*
Author: Fazle Rabbi
Date  : 06 October, 2022
*/

int main()
{  
   // // Basic Array:
   int marks[4];
   marks[0] = 50;
   marks[1] = 60;
   marks[2] = 70;
   marks[3] = 80;
   
   // printf("%d", marks[3]);
   
   // 1D Array:
   int marks2[3] = {10,20,40};
   for (int i = 0; i < 3; i++) {
      printf("The value of element %d is = %d\n", i,marks2[i]);
   }
   
   printf("\n");
   
   // 2D Array:
   int results[6][4] = {
      {66,67,78,99},
      {76,27,48,69},
      {76,27,48,69},
      {76,27,48,69},
      {76,27,48,69},
      {76,27,48,69},
   };
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 4; j++) {
         printf(" %d", results[i][j]);
      }
      printf("\n");
   };
   
   // End of program
   printf("\n");
   return 0;
}