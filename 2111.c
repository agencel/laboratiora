#include <stdio.h>

int newton(int n,int k)
{
  if(k==0 || k==n)
  {
    return 1;
  }
  if(n>k && k>0)
  {
    return newton(n-1,k-1)+newton(n-1,k);
  }
}

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d\n",newton(x,y));
}
