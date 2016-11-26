#include<stdlib.h>
#include<string.h>
#define tam 4

typedef struct funcionario Funcionario;
struct funcionario
{
  int codigo;
  char nome[100];
  float salario;
};

Funcionario fuc[3];

void fun_maior(Funcionario *aux)
{
	int i,cont;
	float maior = 0;
	for(i=0;i<tam;i++)
	{
		if(aux[i].salario > maior)
		{
			maior = aux[i].salario;
			cont = i;
		}
	}

	printf("o funcionário com o maior sálario é %s\n",aux[cont].nome);
}

float med_salario(int cont, float acum)
{
	return acum / cont;
}

void med_menor(float med1,float med2,float med3,float med4)
{
	if(med1 < med2 && med1 < med3 && med1 < med4)
	{
		printf("o departamento com a menor média é a Secretaria\n");
	}
	else
	{
		if(med2 < med3 && med2 < med4)
		{
			printf("o departamenot com amenor media é a Tesouraria\n");
		}
		else
		{
			if(med3<med4)
			{
				printf("o departamento com a menor média é a Biblioteca\n");
			}
			else
			{
				printf("o depratamento com a menor media é o CPD\n");
			}
		}
	}
}

float med_insti (Funcionario *aux)
{
	int i;
	float acum=0;
	for(i=0;i<tam;i++)
	{
		acum = acum + aux[i].salario;
	}

	return acum/tam;
}

void print(Funcionario *aux)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("NOME: %s\n",aux[i].nome);
		printf("SALARIO: %0.2f\n",aux[i].salario);
	}
}