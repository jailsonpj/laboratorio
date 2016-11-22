#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float x,
        somatorio,
        potencia;
  int zx = 25,
      n = 1,
      aux = 1;

  scanf("%f", &x);

  do {
    potencia = pow(x,zx);
    potencia /= n;

    if (aux > 0)
    {
      somatorio+=potencia;
      aux = -1;
    }
    else
    {
      somatorio-=potencia;
      aux = 1;
    }
    n++;
    zx--;
  } while(n<=25);

  printf("%.2f\n", somatorio);

  return 0;
}
