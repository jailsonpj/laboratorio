#include <stdio.h>

int main()
{


  int pr, co;

  printf("Insira o preço do produto: "); scanf("%d", &pr);
  printf("Insira o código de origem do produto [1-5]: "); scanf("%d", &co);

  if (co == 1) printf("Sul\n");
  if (co == 2) printf("Sudeste\n");
  if (co == 3) printf("Centro-Oeste\n");
  if (co == 4) printf("Norte\n");
  if (co == 5) printf("Nordeste\n");

  return 0;
}
