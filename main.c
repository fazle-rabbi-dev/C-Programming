#include <stdio.h>

void swap(int a,int b)
{
   printf("Before the value of a is: %d\n", a);
   printf("Before the value of b is: %d\n", b);
   printf("\n");
   int temp = a; // 10
   a = b; // 10
   b = temp;
   printf("\n");
   printf("After the value of a is: %d\n", a);
   printf("After the value of b is: %d\n", b);
}

void arrRev(int arr[])
{
   // 40,30,20,10
   int temp;
   for (int i = 0; i < 4/2; i++) {
      temp = arr[i]; // 40,30
      arr[i] = arr[3-i]; // 
      arr[3-i] = temp;
   }
}

int main(){
   // Swaping Variable:
   int a = 10;
   int b = 99;
   swap(a,b);
   
   int arr[] = {10,20,30,40};
   // printf("%d\n", arr[0]);
   arrRev(arr);
   for (int i = 0; i < 4; i++) {
      printf("%d\n", arr[i]);
   }
   return 0;
};