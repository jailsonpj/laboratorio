#include <stdio.h>

int main()
{

  char cl;

  scanf("%c", &cl);

  if (cl == 'a' || cl == 'A') printf("Ficção\n");
  else if (cl == 'b' || cl == 'B') printf("Não-Ficção\n");
  else printf("Inválido\n");

  return 0;
}
