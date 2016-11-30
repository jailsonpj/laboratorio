#include <stdio.h>
#include <stdlib.h>
#include "lista8.10.h"

int main(int argc, char const *argv[])
{
	Lista l;
	cria(&l);

	int uni,j;
	char nome[40];
	char loja[40];
	float preco;

	for (int i = 0; i < 3; ++i)
	{
		printf("nome loja: ");
		scanf("%s",loja);
		for ( j = 0; j < 2; ++j)
		{
			printf("Nome produto: ");
			scanf("%s",nome);
			printf("Unidade no estoque: ");
			scanf("%d",&uni);
			printf("preço do produto: ");
			scanf("%f",&preco);

			//inserir()
		}
		inserir(&l,loja,nome,uni,preco,j);
	}

	return 0;
}
