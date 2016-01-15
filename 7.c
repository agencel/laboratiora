#include <stdio.h>
#include <math.h>

int main()
{
  float liczba;
  printf("podaj liczbe: ");
  scanf("%f",&liczba);
  if(liczba<0)
  {
    printf("odwrotnosc liczby wynosi: %.2f\n\n",1/liczba);
  }
  else if(liczba==0)
  {
    printf("pierwiastek liczby wynosi: %.2f\n\n",sqrt(liczba));
  }else
  printf("Pierwiastek liczby wynosi: %.2f \n odwrotnosc liczby wynosi: %.2f\n",sqrt(liczba),1/liczba);
  return 0;
}
