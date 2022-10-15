<p id="Basic"></p>

## Basic Structure:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRqhVNR5Uu2OMI_cQWq5W3Gt5iqgOas_TguvA&usqp=CAU)
<details>
<summary>View Code</summary>

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

</details>

<p id="BasicSyntax"></p>

<p id="Variables"></p>

## Variables:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSplUsGB_Z_-VM7R9B4M5202XU6Y1Y64KUVrg&usqp=CAU)

<p id="Constants"></p>

## Constants:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRohqoT0PIhlhxvBzHrRYQ0hrauPKfXIOXJdA&usqp=CAU)
```c
#include <stdio.h>
#define name "Fazle Rabbi"
#define age 20

int main(){
   const int a = 10;
   a = 20; // throw --> Error!
   printf("Your name is %s\n", name);
   printf("Your age is %d\n", age);
   return 0;
};
```
<p id="DataTypes"></p>

## Data Types:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR-B9WzpR9G1WPMlq7O5DmeV0Rbi6JVBll3_Q&usqp=CAU)

<p id="Operators"></p>

## Operators:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQpMWW4mb6YgHbc_OIyOp6FyPmuFGKtahglOQ&usqp=CAU)

<p id="Input"></p>

## Input & Output:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTIdURDmzNVHbDQv4NhCSZyJzgXNPXMVEg6Ow&usqp=CAU)

<p id="Format"></p>

## Format Specifiers:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRRL9fssQr4g-RifiHoWJMgkDxGFDCWjDhGnA&usqp=CAU)

<p id="Escape"></p>

## Escape Sequence Characters:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTWXiTXehVns680i82xaKBNkzmhVimxoHecdw&usqp=CAU)

<p id="TypeCast"></p>

## Type Casting:
```c
#include <stdio.h>

int main(){
   float sum;
   float a = 28.872;
   int b = 10;
   sum = a+b;
   printf("The sum is: %d\n", (int)sum);
   return 0;
};
```
<p id="TypeDef"></p>

## Type Def:
```c
#include <stdio.h>

int main(){
   typedef int integer;
   integer a = 10;
   integer b = 15;
   integer sum = a+b;
   printf("The sum is: %d\n", (int)sum);
   return 0;
};
```
<p id="Control"></p>

## Control Statement:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQy0Zdq6jHOx3iO8VH77LH0NKYQgWb_lNlefA&usqp=CAU)

<p id="Functions"></p>

## Functions:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT5pU3ezDNfxuo5j0wL-69Ho8bc7jbk9h-XRQ&usqp=CAU)
* ***Math Functions:***
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQwypMPTekYCaS27pfqq-vm5BZEnMjdwhvvYg&usqp=CAU)

<p id="Recursion"></p>

## Recursion:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSmgOzyp2kuC5b0N_M6Zf35hVze4nd9SlwCbQ&usqp=CAU)

<p id="Arrays"></p>

## Arrays:
```c
// 1d:
#include <stdio.h>

int main(){
   int arr[10] = {10,20,40,50};
   printf("%d\n", arr[0]);
   return 0;
};

// 2d:
#include <stdio.h>

int main(){
   int arr[3][3] = {
      {2,4,2},
      {4,1,4},
      {9,2,9,}
   };
   printf("%d\n", arr[0][2]);
   return 0;
};
```
<p id="Strings"></p>

## Strings:
```c
#include <stdio.h>

int main(){
   char name[] = "Fazle Rabbi";
   printf("Hey, %s\n", name);
   return 0;
};
```
* ***String Functions***:
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS6kLdrvE4IK9Wndocj5BBnibl-Dqzri-Kssg&usqp=CAU)

<p id="Pointers"></p>

## Pointers:
```c
// Basic Example:
#include <stdio.h>

int main(){
   int a = 10;
   int *ptr;
   ptr = &a; // address of a stored in variable ptr
   printf("%d\n", *ptr);
   return 0;
};
```
<p id="Structure"></p>

## Structure:
```c
#include <stdio.h>
#include <string.h>

struct FacebookHackedAccount
{
   int id;
   char name[30];
   char email[30];
}victim1,victim2,victim3;

struct demo
{
   int id;
   int age;
};

struct demo person_1;

int main(){
   victim1.id = 10;
   strcpy(victim1.name, "Adams Smith");
   strcpy(victim1.email, "smith@gmail.com");
   printf("Name of victim1: \e[1;35m %s\n\e[1;37m", victim1.name);
   printf("Id of victim1: \e[1;35m %d\n\e[1;37m", victim1.id);
   printf("Email of victim1: \e[1;35m %s\n", victim1.email);
   
   printf("\n");
   person_1.id = 10;
   person_1.age = 37;
   printf("The id of person_1 is: %d\n", person_1.id);
   printf("The person\'s age is: %d\n", person_1.age);
   return 0;
};
```
<p id="Union"></p>

## Union:
* `In a structure each member has it's own storage location wheres members of a union used a single shared memory location.`
* ***This single shared memory location is equal to the size of it's largest data member***
```c
#include <stdio.h>
#include <string.h>

union FacebookHackedAccount
{
   int id;
   char name[30];
   char email[30];
}victim1,victim2,victim3;

union demo
{
   int id;
   int age;
};

union demo person_1;

int main(){
   victim1.id = 10;
   strcpy(victim1.name, "Adams Smith");
   strcpy(victim1.email, "smith@gmail.com");
   printf("Name of victim1: \e[1;35m %s\n\e[1;37m", victim1.name);
   printf("Id of victim1: \e[1;35m %d\n\e[1;37m", victim1.id);
   printf("Email of victim1: \e[1;35m %s\n", victim1.email);
   
   printf("\n");
   person_1.id = 10;
   person_1.age = 37;
   printf("The id of person_1 is: %d\n", person_1.id);
   printf("The person\'s age is: %d\n", person_1.age);
   return 0;
};
```
<p id="Preprocessor"></p>

## Preprocessor:
* In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. We'll refer to the C Preprocessor as CPP. All preprocessor commands begin with a hash symbol (#).
```c
#include <stdio.h>
#include "myheader.h"
```
* ***These directives tell the CPP to get stdio.h from System Libraries and add the text to the current source file. The next line tells CPP to get myheader.h from the local directory and add the content to the current source file.***

<p id="Header"></p>

## Header Files:
* *main.c*
```c
#include <stdio.h>
// #include "header/test.h"
#include <custom.h>

int main(){
   printf("Hello %s\n", name);
   printf("The sum is:%d\n", sum(10,30));
   return 0;
};
```
* *custom.h*
```c
#define name "Fazle Rabbi"
int sum(int a, int b)
{
   return a+b;
}
```
<p id="Files"></p>

## Files:
```c
#include <stdio.h>

int main(){
   FILE *file;
   char name[10];
   int age;
   file = fopen("demo.txt","a");
   if(file == NULL){
      printf("File doesn't exists.\n");
   }
   else{
      printf("Enter your name:");
      scanf("%s", name);
      getchar();
      printf("Enter your age:");
      scanf("%d", &age);
      // fputs("Hello Fazle Rabbi\n",file);
      fprintf(file,"Name = %s\t||\tAge = %d\n",name,age);
      printf("File writed successful.\n");
      fclose(file);
   }
   return 0;
};
```