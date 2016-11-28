#include <stdio.h>
#include "lista8.6"

int main(int argc, char const *argv[])
{
	for (int i = 0; i < tam; ++i)
	{
		setbuf(stdin,NULL);
		printf("Codigo do vendedor: ");
		setbuf(stdin,NULL);
		scanf("%d",&vendedor[i].codigo);
		printf("Valor da venda: ");
		setbuf(stdin,NULL);
		scanf("%f",&vendedor[i].valor);
		printf("Valor do percentual da comissão: ");
		setbuf(stdin,NULL);
		scanf("%f",vendedor[i].percent);
		printf("Tipo de imóvel vendido: ");
		setbuf(stdin,NULL);
		scanf("%s",vendedor[i].imovel);
	}
	
	printf("******************\n");
	print_vendedor(vendedor);
	printf("******************\n");
	print_maior(vendedor);
	printf("******************\n");
	print_quant(vendedor);

	return 0;
}