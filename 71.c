#include <stdio.h>

#define rozmiar 6

int main(){
  float tab[rozmiar];
  int i;
  int licz=0;
  for(i=0;i<rozmiar;i++){
    scanf("%f",&tab[i]);
  }
  for(i=0;i<rozmiar;i++){
    if(tab[i]>=0){
      licz += 1;
    }
  }
  printf("jest %d liczb dodatnich\n",licz);
  return 0;
}
