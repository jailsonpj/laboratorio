#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "10.h"

int main()
{

  memset(&lojas, 0, sizeof(lojas));
  unsigned int opt;

  do {
    menu();
    printf("\nEscolha uma opção: ");
    scanf("%d", &opt);
    executaOpt(opt);
  } while(opt != 4);

  return 0;
}
