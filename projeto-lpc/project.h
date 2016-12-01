#include <stdio.h>
#include <stdlib.h>
#define TAM 1 // Quantidade de registros

/* Estrutura com os dados que serão utilizados */
typedef struct registro Registro;
struct registro
{
  int matricula;
  char nome[100];
  double salarioBruto;
  float ferias;
  float salario13;
  int tempoCasa; // em anos
  int tipoRescisao; // 1 ou 2
};

/* Menu que mostra as opcoes disponiveis */
void menu()
{
  printf("-******************************- MENU -******************************-\n\n");
  printf("\t (1) -> Cadastrar novo funcionário \n");
  printf("\t (2) -> Mostrar relatório de funcionário [x] \n");
  printf("\t (3) -> Mostrar relatório de todos os funcionários \n");
  printf("\t (4) -> Sair \n\n");
  printf("-*****************************----------*****************************-\n\n");
}

/*** Funções que serão utilizadas ***/

/**           Cáculo das Férias         **/
/* Utiliza os campos da estrura:          */
/*  - Avos de Férias ->> "ferias"        */
/*  - Salário Bruto ->> "salarioBruto"   */
double calculaFerias (Registro* aux, int posicao)
{
  double resultado = ( aux[posicao].ferias
                     * aux[posicao].salarioBruto );

  return resultado;
}

/**         Cálculo do 13º salário       **/
/* Utiliza os campos da estrutura:         */
/*  - Avos de 13º salario ->> "salario13" */
/*  - Salário bruto ->> "salarioBruto"    */
double calcula13 (Registro* aux, int posicao)
{
  double resultado = ( aux[posicao].salario13
                     * aux[posicao].salarioBruto );

  return resultado;
}

/**           Cálculo do FGTS            **/
/* Utiliza os campos da estrutura:         */
/*  - Tempo de casa ->> "tempoCasa"       */
/*  - Salario bruto ->> "salarioBruto"    */
/*  - Avos de Férias ->> "ferias"                 */
/*  - Avos do 13º salário ->> "salario13"         */
double FGTS (Registro* aux, int posicao)
{
  double dec13 = calcula13(aux,posicao);
  double valorFerias = calculaFerias(aux,posicao);

  double resultado = aux[posicao].tempoCasa
                   * ( aux[posicao].salarioBruto
                   +   valorFerias
                   +   dec13 );

  return resultado;
}

/**           Cálculo do Valor inicial          **/
/* Utiliza os campos da estrutura:                */
/*  - Salario bruto ->> "salarioBruto"           */
/*  - Tempo de casa ->> "tempoCasa"              */
/*  - Avos de Férias ->> "ferias"                */
/*  - Avos do 13º salário ->> "salario13"        */
/*  - FGTS ->> "FGTS(struct, posicao)"           */
double valorInicial (Registro* aux, int posicao)
{
  double dec13 = calcula13(aux,posicao);
  double valorFerias = calculaFerias(aux,posicao);
  double valorFGTS = FGTS(aux,posicao);
  double resultado = ( aux[posicao].salarioBruto
                     * aux[posicao].tempoCasa
                     + valorFerias
                     + dec13
                     + valorFGTS );

  return resultado;
}

/**                     Cálculo do IRRF                   **/
/* Utiliza os campos da estrutura:                         */
/*  - Todos os utilizados no calculo do VALOR INICIAL      */
/*  e retorna um valor igual ou desconta um outro valor    */
/*  caso seja necessário conforme o código mostra          */
double valorIRRF (Registro* aux, int posicao)
{
  double vInicial = valorInicial(aux, posicao);

  if (vInicial <= 900.00)
    return (vInicial);

  else if (vInicial > 900.00 && vInicial <= 1800.00)
    return (vInicial - 135.00);

  return (vInicial - 360.00);
}

/*   Mostra todas as informações contidas   */
/*  no array de estruturas q será utilizado */
void mostrarRegistro (Registro* aux)
{
  for (int i = 0; i < TAM; i++)
  {
    printf("\t\n*** - Registros cadastrados - ***\n");
    printf("Matricula: %d\n", aux[i].matricula);
    printf("Nome: %s\n", aux[i].nome);
    printf("Salário Bruto: %.2f\n", aux[i].salarioBruto);

    if (aux[i].tipoRescisao == 1)
    {
      printf("o valor do IRRF: %.2f\n",valorIRRF(aux,i));
      printf("o valor do FGTS: %.2f\n", FGTS(aux,i));
      printf("o valor do 13 salario: %.2f\n", calcula13(aux,i));
    }
    else
    {
      if(aux[i].tipoRescisao == 2)
      {
        printf("o valor do IRRF: %.2f\n", valorIRRF(aux,i));
        printf("o valor do 13 salario: %.2f\n", calcula13(aux,i));
      }
    }

  }
}

void recebeRegistros (Registro* aux, int posicao)
{
  setbuf(stdin,NULL);
  printf("************\n");
  printf("Matrícula: ");
  setbuf(stdin,NULL);
  scanf("%d",&aux[posicao].matricula);
  printf("Nome: ");
  setbuf(stdin,NULL);
  scanf("%s",aux[posicao].nome);
  printf("Salário: ");
  setbuf(stdin,NULL);
  scanf("%f",&aux[posicao].salarioBruto);
  printf("Férias: ");
  setbuf(stdin,NULL);
  scanf("%f",&aux[posicao].ferias);
  printf("13º salario: ");
  setbuf(stdin,NULL);
  scanf("%f",&aux[posicao].salario13);
  printf("Tempo de casa: ");
  setbuf(stdin,NULL);
  scanf("%d",&aux[posicao].tempoCasa);
  printf("Tipo de Rescisão: ");
  setbuf(stdin,NULL);
  scanf("%d",&aux[posicao].tipoRescisao);
}
