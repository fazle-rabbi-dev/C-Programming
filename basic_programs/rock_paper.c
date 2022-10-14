#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

char generateRandom()
{
   char arr[10] = {'r','p','s'};
   srand( time(0));
   int randNum = rand()%3;
   char value = arr[randNum];
   return value;
}

int main()
{
   char tmp;
   int your_score=0,computer_score=0;
   int i=0;
   printf("\e[1;33m★·.·´¯`·.·★Welcome★·.·´¯`·.·★\e[1;37m");
   printf("\n");
   again: while(i < 3){
      printf("Player 1 (You): Choose r for (rock), p for (paper) , s for (scissor):");
      // getchar();
      scanf("%c", &tmp);
      getchar();
      printf("%d\n", isalpha(tmp));
      char random_choice = generateRandom();
      printf("\n");
      printf("Player 2 (computer): Choose r for (rock), p for (paper) , s for (scissor): %c\n", random_choice);
      printf("\n");
      if(tmp == 'r' && random_choice == 'p' || tmp == 'p' && random_choice == 's' || tmp == 's' && random_choice == 'r'){
         computer_score +=1;
      }
      else if(tmp == 'p' && random_choice == 'r' || tmp == 's' && random_choice == 'p' || tmp == 'r' && random_choice == 's'){
         your_score+=1;
      }
      i++;
   }
   
   if(your_score > computer_score){
      printf("\n");
      printf("\e[1;31mHurray!🎉 You are winer! \e[1;37m\n");
      printf("\n");
      printf("Your score %d\n", your_score);
      printf("Computer\'s score %d\n", computer_score);
   }
   else if(your_score == computer_score){
      printf("\n");
      printf("\e[1;32m Game Draw!! \e[1;37m\n");
      printf("\n");
      printf("Your score %d\n", your_score);
      printf("Computer\'s score %d\n", computer_score);
   }
   else{
      printf("\n");
      printf("\e[1;31mHurray!🎉 Computer are winer! \e[1;37m\n");
      printf("\n");
      printf("Your score %d\n", your_score);
      printf("Computer\'s score %d\n", computer_score);
   }
   rechack:
   printf("\n");
   printf("----------------\n");
   printf("For start again press (s) or (e) for exit:");
   char restart;
   getchar();
   scanf("%c", &restart);
   getchar();
   printf("\n");
   printf("\n");
   if(restart == 's'){
      printf("\e[1;33mRestarting...\e[1;37m\n\n");
      i = 0;
      your_score = 0;
      computer_score = 0;
      goto again;
   }
   else if(restart == 'e'){
      exit(0);
   }
   else{
      printf("Wrong input!\n");
      goto rechack;
   }
   return 0;
};
