#include <stdio.h>

void changeValue(int *a, int *b)
{
   int tmp = *a;
   *a = *a + *b;
   *b = tmp - *b;
}

int main()
{
   int a = 4,b = 3;
   printf("The value of a is = %d\n", a);
   printf("The value of b is = %d\n", b);
   changeValue(&a, &b);
   printf("The value of a is = %d\n", a);
   printf("The value of b is = %d\n", b);
   return 0;
}
