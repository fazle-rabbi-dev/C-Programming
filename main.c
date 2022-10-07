#include <stdio.h>

void demo(int arr[])
{
   // printf("%d\n", arr[0]);
   for (int i = 0; i < 3; i++) {
      printf("%d\n", arr[i]);
   }
   arr[0] = 99;
}

void demo2(int* array,int* a)
{
   printf("%p\n",array);
   printf("%p\n",a);
   for (int i = 0; i < 9; i++) {
      printf("Value is = %d\n", array[i]);
   }
}

int main()
{
   int arr[] = {10,20,30,40,50,60,70,80,90};
   // printf("Before the value at index 0: %d\n", arr[0]);
   // demo(arr);
   // printf("After the value at index 0: %d\n", arr[0]);
   int a = 67;
   demo2(arr,&a);
   return 0;
}
