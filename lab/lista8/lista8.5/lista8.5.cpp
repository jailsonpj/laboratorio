#include <stdio.h>
#include <stdlib.h>
#include "lista8.5.h"

int main(int argc, char const *argv[])
{
	for (int i = 0; i <2; ++i)
	{
		setbuf(stdin,NULL);
		printf("************\n");
		printf("Matricula: ");
		setbuf(stdin,NULL);
		scanf("%d",&funcio[i].mat);
		printf("Nome: ");
		setbuf(stdin,NULL);
		scanf("%s",funcio[i].nome);
		printf("Salário: ");
		setbuf(stdin,NULL);
		scanf("%f",&funcio[i].salario);
		printf("Férias: ");
		setbuf(stdin,NULL);
		scanf("%f",&funcio[i].ferias);
		printf("13 salario: ");
		setbuf(stdin,NULL);
		scanf("%f",&funcio[i].sl13);
		printf("Tempo de casa: ");
		setbuf(stdin,NULL);
		scanf("%d",&funcio[i].tcasa);
		printf("Tipo de Recisão: ");
		setbuf(stdin,NULL);
		scanf("%d",&funcio[i].trc);

	}

	print_regi(funcio);



	return 0;
}