#include <stdio.h>

char* dosk(int x)
{
  int i,suma;
  i=1;suma=0;
  while(i<x){
    if(x%i==0){
      suma+=i;
    }
    i+=1;
  }
  if(suma==x && x!=0) return "Jest liczba doskonala\n";
  if(suma>x || suma<x || x==0) return "Nie jest liczba doskonala\n";
}

int main()
{
  int x,i;
  scanf("%d",&x);
  printf("%d %s",x,dosk(x));
  printf("program wypisze liczby doskonale mniejsze od 10 000\n");
  for(i=0;i<10000;i++)
  {
    if(dosk(i)=="Jest liczba doskonala\n"){
    printf("%d %s",i,dosk(i));
  }
  }
}
