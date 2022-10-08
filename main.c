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