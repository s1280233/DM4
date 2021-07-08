#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i, sum=0, value;

  //　名前を聞くパート
  char str[8];
  printf("What is your name?\n");
  scanf("%s", str);
  printf("Hello, %s!\n", str);

  //　サイコロを振るパート
  printf("Rolling the dice...\n");
  srand((unsigned int)time(NULL));
  for(i=1;i<3;i++){
    sum += value = 1 + rand() % 6;
    printf("Die %d: %d\n", i, value);
  }

   printf("Total value: %d\n", sum);

   if(sum > 7) printf("%s won\n", str);
   else printf("%s lost\n", str);

   return 0;
}
