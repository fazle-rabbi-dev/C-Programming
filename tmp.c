#include <stdio.h>

int sum(int a,int b);
int milesToKm = 1000;
int yearToDays = 1000;
int minutesToSeconds = 1000;
int weekToDay = 1000;
int marks[] = {10,20,30,40,60};

int main(){
   int a = 20,sum;
   int names[] = "Karim";
   printf("Hello %s", names);
   addition = sum();
   printf("The addition is = %d", addition);
   for (int i = 0; i < 4; i++) {
      if(i == 5){
         break;
         goto end;
      }
      printf("%d", i);
   }
   
   end:
   
   return 0;
};

int sum(int a,int b)
{
   const int result = a + b;
   return result;
}
