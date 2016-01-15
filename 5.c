#include <stdio.h>
#include <stdlib.h>

#define rozmiar 6

int main()
{
  int tab[rozmiar];
  int i;
  for(i=0;i<rozmiar;i++){
    scanf("%d",&tab[i]);
  }
  printf("tablica od poczatku: \n");
  for(i=0;i<rozmiar;i++){
    printf("%d\n",tab[i]);
  }
  printf("tablica od konca: \n");
  for(i=rozmiar-1;i>=0;i--){
    printf("%d\n",tab[i]);
  }
  return 0;
}
