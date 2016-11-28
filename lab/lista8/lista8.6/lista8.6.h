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
