#include <stdio.h>
int soma_n (int n);
int main()
{
  int n, resultado;
  n = 5;
  resultado = soma_n(n);
  printf("\nResultado = %d\n", resultado);

  return 0;
}

int soma_n (int n)
{
  if (n == 0)
    return 0;
  return (n + soma_n(n-1));
}
