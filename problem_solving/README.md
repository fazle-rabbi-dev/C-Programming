<h1 align="center">Basic C Programs</h1>

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

* ***:***
```c

```

* ***:***
```c

```
* ***:***
```c

```

