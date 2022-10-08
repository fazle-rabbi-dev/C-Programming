#include <stdio.h>
#include <string.h>

void parser(char *html)
{
   // printf("%s\n", html);
   int in = 0;
   int index = 0;
   for (int i = 0; i < strlen(html); i++) {
      if(html[i] == '<'){
         in = 1;
         continue;
      }
      else if(html[i] == '>'){
         in = 0;
         continue;
      }
      if(in == 0){
         html[index] = html[i];
         index++;
      }
   }
   html[index] = '\0';
   
   while(html[0] == ' '){
      for (int i = 0; i < strlen(html); i++) {
         // Left shifting:
         html[i] = html[i+1];
      }
   }
   
   while(html[strlen(html) - 1] == ' '){
      for (int i = 0; i < strlen(html); i++) {
         html[strlen(html) - 1] = 'p';
      }
   }
   
   printf("||%s||", html);
}

int main(){
   char html[] = "<h1>  Hello World  </h1>";
   parser(html);
   printf("\n");
   return 0;
};