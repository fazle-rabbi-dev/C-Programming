<h1 align='center'>Basic C Programs</h1>

* ***Linear Search:***
```c
#include <stdio.h>
#include <string.h>

int main(){
   char numbers[20] = {10,38,18,38,16,98,28};
   int num;
   int isFound,pos;
   printf("Enter your number:");
   scanf("%d", &num);
   getchar();
   int i = 0;
   
   for (int i = 0; i < 7; i++) {
      printf("%d,", numbers[i]);
   }
   
   while(i < 7){
      printf("\n");
      if(num == numbers[i]){
         isFound = 1;
         pos = i;
         break;
      }
      i++;
   }
   if(isFound){
      printf("Number found and position is: %d\n", pos+1);
   }
   else{
      printf("Number not found\n");
   }
   return 0;
};
```

```c

```

