#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c;
  float x,y;
  printf("Wprowadz 3 liczby: ");
  scanf("%f %f %f",&a,&b,&c);
  printf("Suma liczb wynosi: %.1f\n",a+b+c);
  printf("Iloczyn wynosi: %.1f\n",a*b*c);
  if(a < b){
    x = a;
    y = b;
  }else
  {
    x = b;
    y = a;
  }
  if(x < c)
  {
    printf("Najmniejsza liczba: %.1f\n",x);
  }else
  {
    printf("Najmniejsza liczba: %.1f\n",c);

  }
  if(y > c)
  {
    printf("Najwieksza liczba %.1f\n",y);
  }else
  {
    printf("Najwieksza liczba %.1f\n",c);
  }

}
