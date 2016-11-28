#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void print_quant (Vendas *aux)
{
	int qntc=0,qnta=0;
	for (int i = 0; i < tam; ++i)
	{	
		if (strcmp(aux[i].imovel,"casa") == 0)
		{
			qntc = qntc + 1;
		}
		if (strcmp(aux[i].imovel,"apto") == 0)
		{
			qnta = qnta + 1;
		}
	}

	printf("A quantidade de casas vendidas é %d\n", qntc );
	printf("A quantidade de apartamentos vendidos é %d\n",qnta );
}

float media_venda(Vendas *aux)
{
	float media;

	for (int i = 0; i < tam; ++i)
	{
		media = media + aux[i].valor;
	}

	return media/tam;
}

void media (Vendas *aux)
{
	
	printf("o valor da media dos imoveis estão %0.2f\n",media_venda(aux));

}