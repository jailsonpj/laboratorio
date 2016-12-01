
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_loja 2
#define max_prod 2

typedef struct produto Produto;
struct produto
{
	char nome[100];
	float preco;
	int unidade;
};

typedef struct loja Loja;
struct loja
{
	char name[100];
	Produto item[max_prod];
};

Loja lj[max_loja];

void inserir_produto()
{
	int cont = 0,contp = 0;
	int aux;
	char nome[100];


	printf("Inserir produto em qual loja: ");
	scanf("%s",nome);
	aux = 0;
	while(cont < max_loja && aux != 1)
	{
		if (strcmp(lj[cont].name,nome) == 0)
		{
			if(contp < max_prod && aux != 1)
			{
				printf("Digite o nome do produto: ");
				scanf("%s",lj[cont].item[contp].nome);
				printf("Informe preço do produto: ");
				scanf("%f",&lj[cont].item[contp].preco);
				printf("Informe quantidade de unidade no estoque: ");
				scanf("%d",&lj[cont].item[contp].unidade);
				contp++;
				aux = 1;
			
		
			}
			else
			{
				printf("Não é possivel mais registrar produto\n");
			}
		}

		cont++;
	}

} 

void inserir_loja()
{
	int cont = 0;
	
	if(cont < max_loja)
	{
		printf("Digite nome da loja: ");
		scanf("%s",lj[cont].name);
		cont = cont + 1;
	}
	else
	{
		printf("Quantidade máxima de lojas cadastradas\n");
	}
}

void mostra()
{
	for (int i = 0; i < max_loja; ++i)
	{
		if(strcmp(lj[i].name,"\0") != 0)
		{
			printf("LOJA:%s\n",lj[i].name);
			for (int j = 0; j < max_prod; ++j)
			{
				if(strcmp(lj[i].item[j].nome,"\0") != 0)
				{
					printf("Produto:%s\n",lj[i].item[j].nome);
					printf("Preço:%0.2f\n",lj[i].item[j].preco );
					printf("Unidade no estoque:%d\n",lj[i].item[j].unidade );
				}
			}
		}
	}
}

void opcao (int op)
{

	if (op == 1)
	{
		inserir_loja();
	}
	if (op == 2)
	{
		inserir_produto();
	}
	if (op == 3)
	{
		mostra();
	}
}

void menu()
{
  printf("-***************- MENU -***************-\n\n");
  printf("\t 1 -> Nova loja \n");
  printf("\t 2 -> Incluir produto \n");
  printf("\t 3 -> Mostrar loja e produtos \n");
  printf("\t 4 -> Sair \n\n");
  printf("-**************----------**************-\n\n");
}

