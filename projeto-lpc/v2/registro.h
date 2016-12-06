#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

typedef struct registro Registro;
struct registro
{
  int matricula;
  char *nome;
  double salarioBruto;
  int ferias; // Avos
  int salario13; // Avos
  int tempoCasa; // em anos
  int tipoRescisao; // 1 ou 2
};

/* Menu que mostra as opcoes disponiveis */
void menu()
{
  printf("-******************************- MENU -******************************-\n\n");
  printf("\t (1) -> Cadastrar novo funcionário \n");
  printf("\t (2) -> Mostrar relatório de todos os funcionários \n");
  printf("\t (3) -> Guardar mudanças\n");
  printf("\t (-1) -> Sair \n\n");
  printf("-*****************************----------*****************************-\n\n");
}
