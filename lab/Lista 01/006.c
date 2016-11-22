#include <stdio.h>

int main(int argc, char const *argv[]) {

  int v[2], aux;

  for (int i = 0; i < 2; i++)
  {
    scanf("%d", &v[i]);
  }

    aux = v[0];
    v[0] = v[0+1];
    v[0+1] = aux;

  for (int i = 0; i < 2; i++)
  {
    printf("%d ", v[i]);
  }

  printf("\n");

  return 0;
}
