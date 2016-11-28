#include <stdio.h>
#include <string.h>
#define tam 2


typedef struct regi Regi;
struct regi{
	int mat;
	char nome[100];
	float salario;
	float ferias;
	float sl13;
	int tcasa;
	int trc;
};

Regi funcio[2];

float valor_ferias(Regi *aux , int i)
{
	return aux[i].ferias * aux[i].salario;
}

float valor_sal13(Regi *aux, int i)
{
	return aux[i].sl13*aux[i].salario;
}

float valor_fgts(Regi *aux,int i)
{
	float resu;
	resu = aux[i].tcasa*(aux[i].salario+valor_ferias(aux,i)+valor_sal13(aux,i));
	return resu;
}

float valor_irrf(Regi *aux,int i)
{
	float valor;

	valor = aux[i].salario * (aux[i].tcasa+valor_ferias(aux,i)+valor_sal13(aux,i)+valor_fgts(aux,i));

	return valor;
}

void print_regi(Regi *aux)
{

	for (int i = 0; i < tam; ++i)
	{
		printf("***Registros Cadastrados***\n");
		printf("Matricula:%d",aux[i].mat);
		printf("Nome:%s",aux[i].nome);
		printf("Salário Bruto:%0.2f",aux[i].salario);
		if (aux[i].trc == 1)
		{
			printf("o valor do IRRF:%0.2f",valor_irrf(aux,i));
		}
		/*else
		{
			if(aux[i].trc == 2)
			{

			}
		}*/
	}
}