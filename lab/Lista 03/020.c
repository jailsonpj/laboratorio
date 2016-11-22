#include <stdio.h>

int fatorial(int n);

int main()
{

  int n;
  scanf("%d", &n);
  double sequencia;
  int i;

  for (int x = 0; x<= n; x++)
  {
    i=100;
    for (int j = 1; j < x; j++)
    {
      sequencia+=i/fatorial(x);
      i--;
    }
  }

  printf("%f\n", sequencia);

  return 0;
}

int fatorial(int n)
{
  if (n==1) return n;
  else return n * fatorial (n-1);
}
