#include <stdio.h>

int odwroc(int x)
{
  int odw=0;
  while(x!=0){
    odw*=10;
    odw+=x%10;
    x/=10;
  }
  return odw;
}
int main()
{
  int x;
  printf("podaj numer: ");
  scanf("%d",&x);
  printf("%d odwrocone to %d\n",x,odwroc(x));
}
