#include <stdio.h>
#define M_PI 3.14159265358979323846


#include <math.h>

int main() {
   double deg, rad;

   printf("Podaj kat w stopniach : ");
   scanf("%lf", &deg);

   rad = 2 * M_PI * deg / 360;
   printf("%.4f deg = %.4f rad\n", deg, rad);
}
