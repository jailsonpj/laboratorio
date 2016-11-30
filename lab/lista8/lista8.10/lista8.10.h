#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct prod Prod;
struct prod
{
	char nome[40];
	int uni;
	float preco;
};

typedef struct no No;
struct no
{
	char name[40];
	float total;
	Prod p[2];
	No *prox;

};

typedef struct lista Lista;
struct lista
{
	No *prim,*ult;
};

void cria(Lista *l)
{
	l->prim = (No*)malloc(sizeof(No));
	l->prim->prox = NULL;
	l->ult = l->prim;
}

void inserir(Lista *l,char *n,char *produto,int unidade,float preco,int i)
{
	l->ult->prox = (No*)malloc(sizeof(No));
	l->ult= l->ult->prox;
	l->ult->prox = NULL;
	strcpy(l->ult->name,n);
	strcpy(l->ult->p[i].nome,produto);
	l->ult->p[i].uni = unidade;
	l->ult->p[i].preco = preco; 
	
}
void mostra (Lista *l)
{
	printf("Lista:\n");
	No *p = l->prim->prox;
	while(p != NULL)
	{
		printf("Nome loja:%s\n",p->name );
		for (int i = 0; i < 2; ++i)
		{
			printf("Nome produto:%s\n",p->p[i].nome );
			printf("Preço produto:%0.2f\n",p->p[i].preco);
			printf("Unidade disponiveis:%d\n",p->p[i].uni);
		}
		

		p = p->prox;
	}

	printf("\n");
}