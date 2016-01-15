#include <stdio.h>

int main()
{
  int a,b,i;
  printf("podaj a i b gdy a<b: ");
  scanf("%d %d",&a,&b);
  if(a<b)
  {
    for(i=a + 1;i<b;i++)
    {
      printf("%d ",i);
    }
  }else printf("a nie jest mniejsze niz b");
}
