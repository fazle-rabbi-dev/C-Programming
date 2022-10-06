#include <stdio.h>

int main()
{
   // creating a string...
   char name[30];
   printf("Type your name: ");
   scanf("%s", name);
   printf("Hey %s, welcome to my awesome program 😍\n.", name);
   return 0;
}
