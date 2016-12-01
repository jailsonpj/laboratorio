
#include <stdio.h>
#include <stdlib.h>
#include "lista8.10.h"

int main(int argc, char const *argv[])
{
	int op;

	do
	{
		menu();
		printf("selecione uma opção: ");
		scanf("%d",&op);
		opcao(op);
	}while(op != 4);
	return 0;
}		

