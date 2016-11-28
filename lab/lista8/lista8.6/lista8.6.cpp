#include <stdio.h>
#include <stdlib.h>
#include "lista8.6.h"

int main(int argc, char const *argv[])
{
	for (int i = 0; i < tam; ++i)
	{
		setbuf(stdin,NULL);
		
		printf("Codigo do vendedor: ");
		setbuf(stdin,NULL);
		scanf("%d",&vendedor[i].codigo);
		setbuf(stdin,NULL);

		printf("Valor da venda: ");
		setbuf(stdin,NULL);
		scanf("%f",&vendedor[i].valor);
		setbuf(stdin,NULL);
		
		printf("Valor do percentual da comissão: ");
		setbuf(stdin,NULL);
		scanf("%f",&vendedor[i].percent);
		setbuf(stdin,NULL);
		
		printf("Tipo de imóvel vendido: ");
		setbuf(stdin,NULL);
		scanf("%s",vendedor[i].imovel);
		setbuf(stdin,NULL);
	}
	
	printf("******************\n");
	print_vendedor(vendedor);
	printf("******************\n");
	print_maior(vendedor);
	printf("******************\n");
	print_quant(vendedor);
	printf("******************\n");
	media_venda(vendedor);

	return 0;
}