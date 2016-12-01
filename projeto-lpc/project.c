#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int main(int argc, char const *argv[])
{

  char url[] = "teste.txt";

  Registro* registros;//[TAM];
  registros = (Registro*) malloc(sizeof(Registro) * TAM);

  FILE *arq;
  arq =  fopen(url, "r");
  if (arq == NULL)
    exit(1);
  else
    while (fscanf(arq, "%d %s %f %f %f %d %d",
                  &registros[0].matricula,
                  registros[0].nome,
                  &registros[0].salarioBruto,
                  &registros[0].ferias,
                  &registros[0].salario13,
                  &registros[0].tempoCasa,
                  &registros[0].tipoRescisao) != EOF);


  printf("\t\n*** - Registros cadastrados - ***\n");
  printf("Matricula: %d\n", registros[0].matricula);
  printf("Nome: %s\n", registros[0].nome);
  printf("Salário Bruto: %.2f\n", registros[0].salarioBruto);


  fclose(arq);
  //menu();

  // for (int i = 0; i < TAM; i++)
  //   recebeRegistros(registros, i);
  //
  // mostrarRegistro(registros);

  return 0;
}
