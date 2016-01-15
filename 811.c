#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void los()
{
  int y,x;
  srand(time(0));
  y=(rand()%1000)+1;
  scanf("%d",&x);
  while(x!=y)
  {
    if(x<y){
    printf("podales za mala liczbe\n");
    scanf("%d",&x);
  }
  if(x>y){
    printf("podales za duza liczbe\n");
    scanf("%d",&x);
  }
}
printf("Braffo zgadles\n");
}
int main()
{
  printf("podaj liczbe z zakresu 1-1000: \n");
  los();
  return 0;
}
