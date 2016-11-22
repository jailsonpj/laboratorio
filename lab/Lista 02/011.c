#include <stdio.h>

int main()
{

  int id;

  printf("Insira sua idade: "); scanf("%d", &id);

  if (id >= 5 && id <= 7) printf("Categoria --> Infantil A\n");
  if (id >= 8 && id <= 10) printf("Categoria --> Infantil B\n");
  if (id >= 11 && id <= 13) printf("Categoria --> Juvenil A\n");
  if (id >= 14 && id <= 17) printf("Categoria --> Juvenil B\n");
  if (id >= 18) printf("Categoria --> Adulto");

  return 0;
}
