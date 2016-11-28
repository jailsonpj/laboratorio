#include <stdio.h>
#include <stdlib.h>
#define tam 2

typedef struct vendas Vendas;
struct vendas
{
	int codigo;
	float valor;
	float percent;
	char imovel[40];
};

Vendas vendedor[tam];

void print_vendedor (Vendas *aux)
{
	for (int i = 0; i < tam; ++i)
	{
		printf("codigo do vendedor:%d\n",aux[i].codigo);
		printf("a comissão recebida:%0.2f\n",aux[i].percent);

	}
}

void print_maior (Vendas *aux)
{
	int maior;
	int cont;
	maior = aux[0].percent;

	for (int i = 0; i < tam; ++i)
	{
		if(aux[i].percent > maior)
		{
			maior = aux[i].percent;
			cont = i;
		}
	}

	printf("o codigo do vendedor com a maior comissão é :%d\n",aux[cont].codigo );

}