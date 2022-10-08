#include <stdio.h>
#include <string.h>

void demo(char *marks)
{
   printf("%x\n", (int)marks);
   for (int i = 0; i < strlen(marks); i++) {
      printf("%d\n", *(marks+i));
   }
   *marks = 99;
   *(marks+1) = 70;
}

int main(){
   char marks[] = {10,20,30,40,50};
   demo(marks);
   printf("\n");
   printf("%d\n", marks[0]);
   printf("%d\n", marks[1]);
   printf("\n");
   printf("\n");
   
   for (int i = 0; i < strlen(marks); i++) {
      printf("The value = %d\n", marks[i]);
   }
   return 0;
};