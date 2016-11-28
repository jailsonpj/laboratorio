#include <stdio.h>
#include <stdlib.h>
#include "lista8.5.h"

int main(int argc, char const *argv[])
{
	for (int i = 0; i <2; ++i)
	{
		printf("************\n");
		printf("Matricula: ");
		scanf("%d",&funcio[i].mat);
		printf("Nome: ");
		scanf("%s",funcio[i].nome);
		printf("Salário: ");
		scanf("%f",&funcio[i].salario);
		printf("Férias: ");
		scanf("%f",&funcio[i].ferias);
		printf("13 salario: ");
		scanf("%f",&funcio[i].sl13);
		printf("Tempo de casa: ");
		scanf("%d",&funcio[i].tcasa);
		printf("Tipo de Recisão: ");
		scanf("%d",&funcio[i].trc);

	}




	return 0;
}