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