#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void wypisz(int a[], int b[],int c[])
{
  const char *dobry_tekst[] ={
    "Świetnie!",
    "Dobra robota!",
    "Braffo piekny!"
  };
  const char *zly_tekst[] ={
    "oj oj oj!",
    "fujka!",
    "niedobrze!"
  };
  int i;
  printf("Dobre wyniki: \n");
    for(i=0;i<5;i++)
    {
      if(a[i]*b[i]==c[i])
      {
        printf("%d * %d = %d %s\n",a[i],b[i],c[i],dobry_tekst[rand() % (sizeof(dobry_tekst) / sizeof(dobry_tekst[0]))]);
      }
    }
    printf("Zle wyniki: \n");
    for(i=0;i<5;i++)
    {
      if(a[i]*b[i]!=c[i])
      {
        printf("%d * %d = %d %s\n",a[i],b[i],c[i],zly_tekst[rand()%(sizeof(zly_tekst) / sizeof(zly_tekst[0]))]);
      }
    }
}

int main()
{
  int l1[5];
  int l2[5];
  int w[5];
  int i;
  for(i=0;i<5;i++)
  {
    srand(time(NULL));
    l1[i]=(rand()%10)+1;
    l2[i]=(rand()%10)+1;
    printf("%d * %d = ",l1[i],l2[i]);
    scanf("%d",&w[i]);
  }
  printf("\n");
  wypisz(l1,l2,w);

}
