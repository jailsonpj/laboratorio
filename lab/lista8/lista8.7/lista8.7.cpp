#include <stdio.h>
#include <stdlib.h>
#include "lista8.7.h"
#define tam 2

int main(int argc, char const *argv[])
{
	

	for (int i = 0; i < tam; ++i)
	{
		printf("código dos cursos:\n");
		printf("1-Engenharia\n");
		printf("2-Computação\n");
		printf("3-Administração\n");
		scanf("%d",alu[i].codigo);
		printf("Digite idade: ");
		scanf("%d",alu[i].idade);
	}

	numero_alunos(alu);
	printf("****************\n");
	qnt_idade(alu);
	printf("****************\n");
	
	return 0;
}