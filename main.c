#include <stdio.h>
#include <stdlib.h>

int main(){
   int *ptr;
   // Use of malloc:
   // ptr = (int*) malloc(3*sizeof(int));
   // for (int i = 0; i < 3; i++) {
   //    printf("Enter the value of index: %d\n", i);
   //    scanf("%d", &ptr[i]);
   // }
   
   // for (int i = 0; i < 5; i++) {
   //    printf("The value of index %d is: %d\n", i,ptr[i]);
   // }
   
   
   ptr = (int*) calloc(3,sizeof(int));
   for (int i = 0; i < 3; i++) {
      printf("Enter the value of index: %d\n", i);
      scanf("%d", &ptr[i]);
   }
   
   for (int i = 0; i < 3; i++) {
      printf("The value of index %d is: %d\n", i,ptr[i]);
   }
   
   
   ptr = (int*) realloc(ptr,5*sizeof(int));
   for (int i = 0; i < 5; i++) {
      printf("Enter the value of index: %d\n", i);
      scanf("%d", &ptr[i]);
   }
   
   for (int i = 0; i < 5; i++) {
      printf("The value of index %d is: %d\n", i,ptr[i]);
   }
   
   free(ptr);
   
   ptr = (int*) malloc(3*sizeof(int));
   for (int i = 0; i < 5; i++) {
      printf("Enter the value of index: %d\n", i);
      scanf("%d", &ptr[i]);
   }
   
   for (int i = 0; i < 5; i++) {
      printf("The value is : %d\n", ptr[i]);
      // scanf("%d", &ptr[i]);
   }
      
   return 0;
};