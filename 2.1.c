#include <stdio.h>

int silnia(int x)
{
  if(x>1) return x*silnia(x-1);
  if(x==1) return 1;
}

int main()
{
  int x;
  scanf("%d",&x);
  printf("silnia z liczby %d wynosi %d\n",x,silnia(x));
}
