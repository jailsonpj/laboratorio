#include <stdio.h>

int fatorial(int n);

int main(int argc, char const *argv[]) {

  float
    y = 0,
    x = 10,
    n = 10,
    i = 1,
    valor = 0;

  while (i <= n)
  {
    y = (x+i)/fatorial(i);
    valor+=y;
    printf("%f ", y);
    i++;
  }

  printf("\n%f\n", valor);

  return 0;
}

int fatorial (int n) {
    if (n == 1 || n == 0) return 1;
    else return (fatorial(n-1)*n);
}
