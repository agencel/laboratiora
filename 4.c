#include <stdio.h>

int main()
{
  int n,i;
  int suma=0;
  printf("podaj liczbe: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    suma += i;
  }
  printf("suma = %d\n",suma);
  return 0;
}
