#include <stdio.h>

int main()
{
  int i,j;
  for(i=0;i<8;i++)
  {
    if(i%2==1){
      printf(" ");
    }
    for(j=0;j<8;j++)
    {
      printf("* ");
      if(j==7){
        printf("\n");
      }
    }
  }
  return 0;
}
