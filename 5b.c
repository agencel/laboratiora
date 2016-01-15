#include <stdio.h>

int main() {
  int a, b;
  char *msg = "Większa liczba to: %d\n";

  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &a);
  printf("Podaj drugą liczbe: ");
  scanf("%d", &b);

  if (a > b) {
     printf(msg, a);
  } else {
     printf(msg, b);
  }
}
