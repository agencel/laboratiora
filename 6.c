#include <stdio.h>
#include <math.h>

int main(){

  float liczba;

  printf("Podaj liczbe rzeczywista: ");
  scanf("%f",&liczba);

  if(liczba < 0){
    printf("Liczba jest ujemny \n\n");
    return 0;
  }else{
    printf("Pierwiastek z %.0f to %.2f\n",liczba,sqrt(liczba));
  }

}
