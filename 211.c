#include <stdio.h>
int main() {
  int pierwsza,i;
  printf("Podaj liczbe calkowita: ");
  scanf("%d",&pierwsza);
  for(i=2;i<pierwsza;i++)
  {
    if(pierwsza%i == 0)
    {
      printf("%d nie jest pierwsza\n",pierwsza);
      return 0;
    }
  }
  if(pierwsza==i){
  printf("Podana liczba %d jest pierwsza\n",pierwsza);
}
  return 0;
}
