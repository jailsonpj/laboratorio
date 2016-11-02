#include <stdio.h>

int potencia(int k, int n);

int main()
{
  int k = 2, n = 5;
  int resultado = potencia(k, n);
  printf("%d\n", resultado);
  return 0;
}

int potencia(int k, int n)
{
   int m;
  if (n == 0)
    return 1;
  else if (n % 2 ==0)
  {
    m = potencia (k, n/2);
    return m*m;
  }
  else
    return (k * potencia(k, n-1));
}
