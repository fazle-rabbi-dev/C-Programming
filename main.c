#include <stdio.h>
#include <stdlib.h>

int main(){
   // Dynamic memory alloaction:
   int length,i=0,a,b;
   char *id;
   id = (char*) malloc((length+1) * sizeof(char));
   
   while(i < 3){
      printf("Employe %d => Enter the number of length of employe id:",i+1);
      scanf("%d", &length);
      getchar();
      printf("Enter the value of a:\n");
      scanf("%d", &a);
      getchar();
      printf("Enter the value of b:\n");
      scanf("%d", &b);
      printf("Enter the id of employe %d:\n",i+1);
      scanf("%s", id);
      printf("The id of employe %d is: %s\n", i+1,id);
      i++;
   }
   return 0;
};