#include <stdio.h>

int potega(int n, int k)
{
  if(k==0)
  {
    return 1;
  }
  if(k>0)
  {
    return n * potega(n,k-1);
  }
}
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d\n",potega(x,y));
}
