#include <stdio.h>

int main()
{
  int pol[100];
  int razy[100];
  int x,y;
  int i,j;
  int licz = 0;
  int wynik;

  int a,b;

  printf("podaj liczby ktore chcesz pomnozyc: ");
  scanf("%d %d",&x,&y);
  a=x;
  b=y;
  i=0;
  while(a>=1){
    if(a%2==0){
      pol[i]=0;
    }else{
    pol[i]=a;
  }
  a/=2;
  i+=1;
  licz+=1;
  }
  j=0;
  while(j<=licz){
    if(pol[j]==0){
      razy[j]=0;
    }else{
      razy[j]=b;
    }
    b*=2;
    j+=1;
  }
  for(i=0;i<licz;i++){
    printf("pol[%d] = %d\nrazy[%d] = %d\n",i,pol[i],i,razy[i]);
  }
  for(i=0;i<licz;i++){
    wynik+=razy[i];
  }
  printf("\n");
  printf("%d * %d = %d\n",x,y,wynik);
}
