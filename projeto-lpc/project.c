#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int main()
{


  char url[] = "teste.txt"; // nome do arquivo que será lido

  Registro* registros;
  registros = (Registro*) malloc(sizeof(Registro) * TAM);

  FILE *arq;
  arq =  fopen(url, "w"); // ou "a" para append

  menu();

  for (int i = 0; i < TAM; i++)
    recebeRegistros(registros, i);
  imprimirRegistro(registros, arq);

  return 0;
}
