#include <stdio.h>

int sum()
{  
   int num_a,num_b,r;
   printf("Enter number of a: ");
   scanf("%d", &num_a);
   printf("Enter number of b: ");
   scanf("%d", &num_b);
   r = num_a + num_b;
   return r;
}

// declaration:
void printStar();

int main()
{  
   int result;
   printf("Hello World!\n");
   result = sum();
   printf("The result = %d\n", result);
   printStar(400);
   // End of program
   printf("\n");
   return 0;
}

// definition:
void printStar(int num)
{
   for (int i = 0; i < num; i++) {
      printf("%c", '*');
   }
}