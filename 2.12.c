#include <stdio.h>
#include "rect.h"

int main()
{
  struct rect r1 = {{1, 1}, {2, 2}};
  struct rect r2 = {{1, 1}, {4, 4}};

  int a = disjointrect(r1,r2);
  printf("%d\n",a);
}
