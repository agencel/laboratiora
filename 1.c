#include <stdio.h>
int main() {
  int x=2;
  int c=0;
  while(c<=2010){
    x = x * 2;
    printf("%2d ",x);
    c += x;
  }
  return 0;
}
