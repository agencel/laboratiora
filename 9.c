#include <stdio.h>
#include <math.h>

int main()
{
  float start,koniec,krok;
  printf("Podaj wartosc poczatkowa, koncowa i krok: ");
  scanf("%f %f %f",&start,&koniec,&krok);
  while(start<=koniec)
  {
    printf("%4.4f %4.4f\n",start,sqrt(start));
    start = start+krok;
  }
}
