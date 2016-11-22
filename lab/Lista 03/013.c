#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void min_max(int *v, int *min, int *max);

int main() {

  int *v;
  v = (int *) (malloc(sizeof(int) * TAM));
  int min, max;

  for (int i = 0; i < TAM; i++)
  {
    scanf("%d", &v[i]);
  }

  min_max(v,&min,&max);

  printf("\nO menor valor é: %d", min);
  printf("\nO maior valor é: %d", max);

  return 0;
}

void min_max(int *v, int *min, int *max)
{

  *max = v[0];
  *min = v[0];

  for (int i = 0; i < TAM; i++)
  {
    if (v[i] > *max)
    {
      *max = v[i];
    }
    if (v[i] < *min)
    {
      *min = v[i];
    }
  }
}
