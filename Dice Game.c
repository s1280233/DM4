#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i, sum=0, value;
  printf("Rolling the dice...\n");
  srand((unsigned int)time(NULL));
  for(i=1;i<3;i++){
    sum += value = 1 + rand() % 6;
    printf("Die %d: %d\n", i, value);
  }

   printf("Total value: %d\n", sum);

   if(sum > 7) printf("You won\n");
   else printf("You lost\n");

   return 0;
}
