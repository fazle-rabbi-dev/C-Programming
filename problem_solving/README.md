<h1 align="center">Problem Solving</h1>

* ***Factorial:***
```c
#include <stdio.h>

int main(){
   int n,i=1,fact=1;
   printf("Enter the value you want to factorial:"); // --> May be grammatical error!
   scanf("%d", &n);
   while(i <= n){
      fact = fact * i;
      i++;
   }
   printf("The factorial of %d is: %d\n", n,fact);
   return 0;
};
```

* ***Multiplication Table:***
```c
#include <stdio.h>

int main(){
   int n;
   printf("Enter the value of n:");
   scanf("%d", &n);
   int i = 1;
   int count = 0;
   if(n < 3){
      count = n;
   }
   else{
      count = 10;
   }
   while(i <= count){
      printf("%d X %d = %d\n", n,i,n*i);
      i++;
   }
   return 0;
};
```

* ***Prime Number:***
```c
#include <stdio.h>

int main(){
   int n;
   printf("Enter the value of n:");
   scanf("%d", &n);
   int i = 2;
   int count = 0;
   while(i < n){
      if(n%i == 0){
         count++;
         break;
      }
      i++;
   }
   if(count == 0){
      printf("%d is prime number\n", n);
   }
   else{
      printf("%d is not a prime number\n", n);
   }
   return 0;
};
```

* ***Sum Of Digit:***
```c
#include <stdio.h>

int main(){
   int n,temp,rem,sum=0;
   printf("Entet a digit:");
   scanf("%d", &n);
   temp = n;
   while(temp != 0){
      rem = temp % 10; // 10
      sum = sum + rem;
      temp = temp / 10;
   }
   printf("The sum of digit (%d) is: %d\n", n,sum);
   return 0;
};
```

* ***Reverse A Number:***
```c
#include <stdio.h>

int main(){
   int num,sum=0,r;
   printf("Enter a number:");
   scanf("%d", &num);
   int temp = num;
   while(temp!=0){
      r = temp % 10; // 10/10>0
      sum = sum * 10 + r;// 0 *10 +0
      temp = temp / 10; // 10/10 > 1
   }
   printf("Reversed number is: %d\n", sum);
   return 0;
};
```

* ***GCD & LCM:***
```c
#include <stdio.h>

int main(){
   int num1,num2,n1,n2,rem,GCD,LCM;
   printf("Enter two number:");
   scanf("%d %d", &num1,&num2);
   n1 = num1;
   n2 = num2;
   while(n2 != 0){
      rem = n1%n2;
      n1 = n2;
      n2 = rem;
   }
   GCD = n1;
   LCM = (num1*num2)/n1;
   printf("The (GCD) of %d %d is: %d\n", num1,num2,GCD);
   printf("The (LCM) of %d %d is: %d\n", num1,num2,LCM);
   return 0;
};
```

* ***Palindrom Number:***
```c
#include <stdio.h>

int main(){
   int num,temp,rem,reversed_number=0;
   printf("Enter a number:");
   scanf("%d", &num);
   temp = num;
   while(temp != 0){
      rem = temp % 10;
      reversed_number = reversed_number * 10 + rem;
      temp = temp / 10;
   }
   if(num == reversed_number){
      printf("The number is palindrom\n");
   }
   else{
      printf("The number is not palindrom\n");
   }
   return 0;
};
```

* ***Armstrong Number:***
```c
/*
123 --> 1^3 + 2^3 + 3^3 
      = 1+8+27 
      = 36
      --> So, it's an Armstrong Number!
/*
#include <stdio.h>

int main(){
   int num,temp,rem,sum=0;
   printf("Enter a number:");
   scanf("%d", &num);
   temp = num;
   while(temp != 0){
      rem = temp % 10;
      sum = sum + rem*rem*rem;
      temp = temp / 10;
   }
   if(num == sum){
      printf("The number is Armstrong Number\n");
   }
   else{
      printf("The number is not Armstrong Number\n");
   }
   return 0;
};
```
* ***Counting Number of a Digit:***
```c
#include <stdio.h>

int main(){
   int tmp,num,count=0;
   printf("Enter a number:");
   scanf("%d", &num);
   tmp = num;
   while(tmp!=0){
      tmp = tmp / 10;
      count++;
   }
   printf("The length of number is :%d\n", count);
   return 0;
};
```

* ***Strong Number:***
```c
#include <stdio.h>

int main(){
   int num,i,tmp,rem,sum,fact=1;
   printf("Enter a number:");
   scanf("%d", &num);
   tmp = num;
   while(tmp != 0){
      rem = tmp % 10;
      for (i = 1; i <= rem; i++) {
         fact = fact*i; // 
      }
      sum = sum + fact;
      fact = 1;
      tmp = tmp / 10;
   }
   if(num == sum){
      printf("The number is a strong number %d\n", sum);
   }
   else{
      printf("The number is not a strong number %d\n", sum);
   }
   return 0;
};
```

<hr />
<h3 align='center'><em>Series</em></h3>
<hr />

* ***1x2 + 2x3 .... n1+n2:***
```c
// 1*2 + 2*3 .... n1*n2
#include <stdio.h>

int main(){
   int num1,num2,a=1,b=2,sum=0;
   printf("Enter two number: ");
   scanf("%d%d", &num1,&num2);
   while(a <= num1 && b <= num2){
      sum = sum + (a*b);
      a++;
      b++;
   }
   printf("The sum is: %d\n", sum);
   return 0;
};
```

* ***1-2 + 3-4 + 5-6 ....n:***
```c
#include <stdio.h>

int main(){
   int num,sum=0;
   int odd=0,even=0;
   scanf("%d", &num);
   int i = 1;
   while(i <= num){
      if(i % 2 == 0){
         odd = odd + i;
      }
      else{
         even = even + i;
      }
      i++;
   }
   sum = odd - even;
   printf("The sum is: %d\n", sum);
   return 0;
};
```

* ***Fibonacci Series:***
```c
#include <stdio.h>

int main(){
   int count = 0,num,fib=0,first=0,second=1,sum=0;
   printf("Enter a number:");
   scanf("%d", &num);
   while(count < num){
      if(count == 0 || count == 1){
         fib = count;
         sum = sum + fib;
      }
      else{
         fib = first + second;
         sum = sum + fib;
         first = second;
         second = fib;
      }
      count++;
   }
   printf("The fibonacci number of %d is: %d\n", num,sum);
   return 0;
};

/*
5 -> 0+1+1+2+3 = 7
*/
```

<hr />
<h3 align='center'><em>Pattern Printing</em></h3>
<hr />

```c
/*
1
12
123
1234
12345
123456
1234567
*/
#include <stdio.h>

int main(){
   int num,i=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   while(i <= num){
      for (int j = 1; j <= i; j++) {
         printf("%d", j); // for binary digit --> j%2 = 1 or 0
      }
      printf("\n");
      i++;
   }
   return 0;
};
```


```c
/*
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
*/
#include <stdio.h>

int main(){
   int num,i=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   while(i <= num){
      for (int j = 1; j <= i; j++) {
         printf("%c", 64+j);
      }
      printf("\n");
      i++;
   }
   return 0;
};
```

```c
/*
123456789
12345678
1234567
123456
12345
1234
123
12
1
*/
#include <stdio.h>

int main(){
   int num,i=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   while(num >= i){
      for (int j = i; j <= num; j++) {
         printf("%d", j);
      }
      printf("\n");
      num--;
   }
   return 0;
};
```

```c
/*
1
12
123
1234
12345
1234
123
12
1
*/
#include <stdio.h>

int main(){
   int num,i=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   while(i <= num){
      for (int j = 1; j <= i; j++) {
         printf("%d", j);
      }
      printf("\n");
      i++;
   }
   i = 1;
   while(num >= i){
      for (int j = i; j < num; j++) {
         printf("%d", j);
      }
      printf("\n");
      num--;
   }
   return 0;
};
```

```c
/*
1
    12
   123
  1234
 12345
123456
*/
#include <stdio.h>

int main(){
   int num,i=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   for (int i = 1; i <= num; i++) {
      for (int j = 1; j <= num-i; j++) {
         printf(" ");
      }
      
      for (int j = 1; j <= i; j++) {
         printf("%d", j);
      }
      printf("\n");
   }
   printf("\n");
   return 0;
};
```

```c
/*
1
2 4 
3 6 9
4 8 12 16
*/
#include <stdio.h>

int main(){
   int num,row=1;
   printf("Enter a number:");
   scanf("%d", &num);
   printf("\n");
   
   while(row <= num){
      for (int col = 1; col <= row; col++) {
         printf("%d ", row*col);
      }
      printf("\n");
      row++;
   }
   
   printf("\n");
   return 0;
};
```

