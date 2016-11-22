#include <stdio.h>

int main()
{

  int a, b, c;

  printf("Insira os três valores valores separados por um espaço: "); scanf("%d %d %d", &a, &b, &c);

  if (a != b && a != c && b != c) printf("Escaleno\n");
  else if (a == b && a == c && b == c) printf("Equilátero\n");
  else (printf("Isósceles\n"));
  return 0;
}
