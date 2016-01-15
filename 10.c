#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *in_handle;
  char bufor[BUFSIZ];
  unsigned int ui,pi;
  double x, y,a,b;
  int oprocz_pierwszego=0;

  in_handle = fopen(argv[1], "r");
  while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
    pi=ui;
    x=a;
    y=b;
    sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
    if(pi!=ui && x!=a && y!=b){
    printf("--> %d %.2f %.2f,\n", ui, x, y);
    if(oprocz_pierwszego!=0){
    printf("przejechane km: %d, zatankowane: %.1f, koszt: %.2f\n",ui-pi,x-a/(ui-pi),y*x);
    }
    oprocz_pierwszego+=1;
    }
  }
  fclose(in_handle);
  return EXIT_SUCCESS;
}
