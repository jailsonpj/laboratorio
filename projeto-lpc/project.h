#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3 // Quantidade máxima de funcionários que podem ser registrados


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
/* Utiliza os campos da estrura:         */
/*  - Avos de Férias ->> "ferias"        */
/*  - Salário Bruto ->> "salarioBruto"   */
double calculaFerias (Registro* aux, int posicao)
{
  double resultado = ( aux[posicao].ferias
                     * aux[posicao].salarioBruto );
  return resultado;
}

/**         Cálculo do 13º salário       **/
/* Utiliza os campos da estrutura:        */
/*  - Avos de 13º salario ->> "salario13" */
/*  - Salário bruto ->> "salarioBruto"    */
double calcula13 (Registro* aux, int posicao)
{
  double resultado = ( aux[posicao].salario13
                     * aux[posicao].salarioBruto );
  return resultado;
}

/**                 Cálculo do FGTS              **/
/* Utiliza os campos da estrutura:                */
/*  - Tempo de casa ->> "tempoCasa"               */
/*  - Salario bruto ->> "salarioBruto"            */
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
void imprimirRegistro (Registro* aux, FILE *arq)
{
  fprintf(arq, "\t\n*** - Registros cadastrados - ***\n\n");
  for (int i = 1; i <= TAM; i++)
  {
    fprintf(arq, "Código [%d]...\n\n", i);
    fprintf(arq, "Matricula: %d\n", aux[i].matricula);
    fprintf(arq, "Nome: %s\n", aux[i].nome);
    fprintf(arq, "Salário Bruto: %.2lf\n", aux[i].salarioBruto);
    if (aux[i].tipoRescisao == 1)
    {
      fprintf(arq, "o valor do IRRF: %.2lf\n",valorIRRF(aux,i));
      fprintf(arq, "o valor do FGTS: %.2lf\n", FGTS(aux,i));
      fprintf(arq, "o valor do 13 salario: %.2lf\n", calcula13(aux,i));
    }
    else
    {
      if(aux[i].tipoRescisao == 2)
      {
        fprintf(arq, "o valor do IRRF: %.2lf\n", valorIRRF(aux,i));
        fprintf(arq, "o valor do 13 salario: %.2lf\n", calcula13(aux,i));
      }
    }
    fprintf(arq, "\n\n");
  }
}

void recebeRegistros (Registro* aux, int posicao)
{
  int matricula;
  char nome[100];
  double salarioBruto;
  float ferias;
  float salario13;
  int tempoCasa; // em anos
  int tipoRescisao; // 1 ou 2

  printf("************\n");

  printf("Matrícula: ");
  setbuf(stdin,NULL);

  scanf("%d",&matricula);
  aux[posicao].matricula = matricula;

  printf("Nome: ");
  setbuf(stdin,NULL);
  gets(nome);
  strcpy(aux[posicao].nome, nome);

  printf("Salário: ");
  setbuf(stdin,NULL);
  scanf("%lf",&salarioBruto);
  aux[posicao].salarioBruto = salarioBruto;

  printf("Férias: ");
  setbuf(stdin,NULL);
  scanf("%f",&ferias);
  aux[posicao].ferias = ferias;

  printf("13º salario: ");
  setbuf(stdin,NULL);
  scanf("%f",&salario13);
  aux[posicao].salario13 = salario13;

  printf("Tempo de casa: ");
  setbuf(stdin,NULL);
  scanf("%d",&tempoCasa);
  aux[posicao].tempoCasa = tempoCasa;

  printf("Tipo de Rescisão: ");
  setbuf(stdin,NULL);
  scanf("%d",&tipoRescisao);
  aux[posicao].tipoRescisao = tipoRescisao;
}
