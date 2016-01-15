#include <stdio.h>
#include <stdlib.h>

#define rozmiar 6

int main()
{
  float tab[rozmiar];
  int i,j;
  int pom;
  for(i=0;i<rozmiar;i++){
    scanf("%f",&tab[i]);
  }
  for(i=0;i<rozmiar;i++){
      for(j=0;j<rozmiar-i-1;j++){
      if(tab[j]>tab[j+1])
      {
        pom = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = pom;
      }
    }
  }
  printf("największa liczba: %.1f\n",tab[rozmiar-1]);
  printf("najmniejsza liczbaL %.1f\n",tab[0]);
  return 0;
}
