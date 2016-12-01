#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int main(int argc, char const *argv[])
{

  Registro* registros;//[TAM];
  registros = (Registro*) malloc(sizeof(Registro) * TAM);

  //menu();

  for (int i = 0; i < TAM; i++)
    recebeRegistros(registros, i);

  mostrarRegistro(registros);

  return 0;
}
