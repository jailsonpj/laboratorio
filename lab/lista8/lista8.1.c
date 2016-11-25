#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct  
{
	char nome[40];
	int valor;
	int idade;
	char sexo[40];

}Cliente;
Cliente cliente[3];

void print_struct(Cliente *cliente)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("nome:%s\t",cliente[i].nome);
		printf("valo:%d\t",cliente[i].valor);
		printf("sexo:%s\n",cliente[i].sexo);
	}
}
int maio_qnt (int x,int y,int z)
{
	
	if( x>y && x>z){
		printf("a revista Exame é a que contem mais quantidade vendida\n");
	}else{
		if(y>x && y>z)
		{
			printf("a revista Veja é a que contem mais quantidade vendida\n");
		}else{
			printf("a revista Info é a que contem mais quantidade vendida\n");
		}
	}


}

void menor_qnt(int x,int y,int z)
{
	if(x<y && x<z)
	{
		printf("a revista Exame é a que contem menos quantidade vendida\n");
	
	}else{
		if(y<x && y<z)
		{
			printf("a revista Veja é a que contem menos quantidade vendida\n");
		}else{
			printf("a revista info é a que contem menos quantidade vendida\n");
		}
	}
}

int idade_media(int acum,int qnt)
{
	return acum/qnt;
}

int qnt_masculino(char *sexo)
{
	int acum=0;
	if(strcmp(sexo,"masculino")==0)
	{
		acum++;
	}
	return acum;
}

int qnt_feminio(char *sexo)
{
	int acum=0;
	if(strcmp(sexo,"feminino")==0)
	{
		acum++;
	}
	return acum;
}





int main(int argc, char const *argv[])
{
	
	//Cliente *reg[3];
	char nome[40];
	int valor;
	int idade;
	char sexo[40];

	int i,op,acum=0;
	int cont1=0,cont2=0,cont3=0,sex=0,sex1=0;
	int maior,menor,media;

	for(i=0;i<3;i++)
	{
		
		printf("qual das revistas vc comprou:(1)EXAME,(2)VEJA,(3)INFO.\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				cont1++;
				strcpy(cliente[i].nome,"EXAME");
				printf("digite valor da revista: ");
				scanf("%d",&cliente[i].valor);
				printf("sua idade: ");
				scanf("%d",&cliente[i].idade);
				printf("seu sexo é: ");
				scanf("%s",cliente[i].sexo);
				sex = sex + qnt_masculino(cliente[i].sexo);
				

			break;
			case 2:
				cont2++;
				strcpy(cliente[i].nome,"VEJA");
				printf("digite valor da revista: ");
				scanf("%d",&cliente[i].valor);
				printf("sua idade: ");
				scanf("%d",&cliente[i].idade);
				printf("seu sexo é: ");
				scanf("%s",cliente[i].sexo);
				acum = acum+cliente[i].idade;
			break;
			case 3:
				cont3++;
				strcpy(cliente[i].nome,"INFO");
				printf("digite valor da revista: ");
				scanf("%d",&cliente[i].valor);
				printf("sua idade: ");
				scanf("%d",&cliente[i].idade);
				printf("seu sexo é: ");
				scanf("%s",cliente[i].sexo);
				sex1 = sex1 + qnt_feminio(cliente[i].sexo);
			break;
			default :
				printf("opção inválida!");
		}
	}
	//print_struct(cliente);
	maio_qnt(cont1,cont2,cont3);
	menor_qnt(cont1,cont2,cont3);
	media = idade_media(acum,cont2);
	printf("a idade média das pessoas que compraram a revista veja é de %d\n",media );
	printf("a quantidade de homens que compraram a revista exata é %d\n",sex);
	printf("a quantidade de mulheres que compraram a revista info é %d\n",sex);


	return 0;
}
