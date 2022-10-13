#include <stdio.h>

int main(){
   int i = 0,sum = 0,n;
   scanf("%d", &n);
   while(i < 1){
      // printf("%d\n", i);
         for (int j = 1; j < n; j+=2) {
            sum = sum + j;
            printf("%d\n", sum);
         }
      i++;
   }
   return 0;
};
// ১  ৪  ৯  ১৬ ২৫ – – – – n 