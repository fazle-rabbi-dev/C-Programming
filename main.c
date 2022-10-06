#include <stdio.h>

int main()
{  
   int a = 0;
   int num;
   for (int i = 0; i < 4; i++) {
      printf("%d\n", i);
      for (int j = 0; j < 4; j++) {
         printf("Enter 0 for exit: ");
         scanf("%d", &num);
         printf("You have entered %d\n", num);
         if(num == 0){
            // goto end;
            break;
         }
      }
   }
   end:
   // End of program
   printf("\n");
   return 0;
}
