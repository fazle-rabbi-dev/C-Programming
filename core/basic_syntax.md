### Basic Syntax:
```c
// 1 --> Documentation Section:
/*
Author: Fazle Rabbi
Date: 12 Oct, 2022
Purpose: demo
*/

// 2 --> Link Section:
#include <stdio.h>

// 3 --> Definition Section:
#define PI 300

// 4 --> Global Declaration Section:
int a = 10;
int demo();

// 5 --> Main Section:
#include <stdio.h>

int main(){
   // 1 --> Declaration Part:
   int num = 77;
   float num2 = 27.8;
   char name[15] = "Harry";
   // 2 --> Execution Part:
   printf("Hello World\n");
   int value = demo();
   printf("The value is: %d\n", value);
   return 0;
};

// Subprogram Section: 
int demo(){
   return 0;
}
```