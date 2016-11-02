#include <stdio.h>

int encontra_soma (int v[], int tam);

int main()
{
  int tam = 5;
  int v[tam*2];
  int resultado;

  for (int i = 0; i < tam*2; i++)
    scanf("%d", &v[i]);

  resultado = encontra_soma (v,tam-1);

  printf("Resultado = %d\n", resultado);

  return 0;
}

int encontra_soma (int v[], int tam)
{
  if (tam == 0)
  {
    return v[tam];
  }
  else
  {
    return (v[tam] + encontra_soma(v,tam-1));
  }
}
