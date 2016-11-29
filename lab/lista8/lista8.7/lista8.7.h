#include <stdio.h>
#include <stdlib.h>
#define tam 2

typedef struct aluno Aluno;
struct aluno
{
	int codigo;
	int idade;
};

Aluno alu[tam];


void numero_alunos(Aluno *aux)
{

	int qnt1=0,qnt2=0,qnt3=0;

	for (int i = 0; i < tam; ++i)
	{
		if (aux[i].codigo == 1)
		{
			qnt1 = qnt1 + 1;
		}
		if (aux[i].codigo == 2)
		{
			qnt2 = qnt2 + 1;
		}
		if (aux[i].codigo == 3)
		{
			qnt3 = qnt3 + 1;
		}
	}

	printf("A quantidade de alunos de Engenharia: %d\n",qnt1 );
	printf("A quantidade de alunos de Computação: %d\n",qnt2 );
	printf("A quantidade de alunos de Administração: %d\n",qnt3 );

}

void qnt_idade (Aluno *aux)
{
	int qnt1=0,qnt2=0,qnt3=0;

	for (int i = 0; i < tam; ++i)
	{
		if (aux[i].codigo == 1)
		{
			if (aux[i].idade >= 20 && aux[i].idade <= 28)
			{
				qnt1 = qnt1 + 1;
			}
			
		}
		if (aux[i].codigo == 2)
		{
			if (aux[i].idade >= 20 && aux[i].idade <= 28)
			{
				qnt2 = qnt2 + 1;
			}
		
		}
		if (aux[i].codigo == 3)
		{
			if (aux[i].idade >= 20 && aux[i].idade <= 28)
			{
				qnt3 = qnt3 + 1;
			}
			
		}
	}
	printf("A quantidade de alunos entre 20 a 28 anos de idade de Engenharia: %d\n",qnt1 );
	printf("A quantidade de alunos entre 20 a 28 anos de idade de Computação: %d\n",qnt2 );
	printf("A quantidade de alunos entre 20 a 28 anos de idade de Administração: %d\n",qnt3 );


}