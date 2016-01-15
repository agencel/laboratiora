#include <stdio.h>
#include <math.h>

double fun(double x, double y)
{
  return sqrt(pow(x,2)+pow(y,2));
}
int main()
{
  double a,b;
  printf("podaj boki: ");
  scanf("%lf %lf",&a,&b);
  printf("przeciwprostokatna wynosi: %.1lf \n",fun(a,b));
  return 0;
}
