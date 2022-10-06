#include <stdio.h>

void sayHello();

int main()
{
   // Easy Way of Creating Strings:
   char text[] = "Hello World";
   text[0] = 'J';
   printf("%s\n", text);
   
   
   // Another Way of Creating Strings:
   char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
   printf("%s\n", greetings);
   printf("%d\n", sizeof(greetings)); 
   
   sayHello();
   
   return 0;
}


void sayHello(){
   char name[] = "Karim";
   printf("Hello %s. How are you?\n", name);
}
   