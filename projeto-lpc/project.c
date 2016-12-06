#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#define TAM 3

int main()
{

  int opcao, cPos = 0;
  char url[] = "teste.txt"; // nome do arquivo que será lido

  Registro* registros;
  registros = (Registro*) malloc(sizeof(Registro) * TAM);

  FILE *arq;
  arq =  fopen(url, "w"); // ou "a" para append

  while (opcao != -1)
  {
    menu();
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        system("clear");
        recebeRegistros(registros, cPos);
        cPos++;
        break;
      case 2:
        system("clear");
        mostrarNaTela(registros, cPos);
        break;
      case 3:
        system("clear");
        imprimirRegistro(registros, arq, cPos);
        printf("Valor salvo em arquivo com sucesso\n\n");
        break;
    }
  }

  return 0;
}
