#include<stdio.h>
#include"lista8.3.h"

int main(int argc, char const *argv[])
{
	int op,i;
	int cont1,cont2,cont3,cont4;
	float acum1,acum2,acum3,acum4;
	float med1,med2,med3,med4;

	for(i=0;i<tam;i++)
	{
		printf("******Departamentos*******\n");
		printf("(1)-Secretaria\n");
		printf("(2)-Tesouraria\n");
		printf("(3)-Biblioteca\n");
		printf("(4)-CPD\n");
		printf("Escolha uma das opcões acima: ");
		__fpurge(stdin);
		scanf("%d",&op);

		printf("*****************************\n");
		switch(op)
		{
			case 1:
				cont1;
				fuc[i].codigo = 1;
				printf("Digite seu nome: ");
				__fpurge(stdin);
				scanf(" %[^\n]s",fuc[i].nome);
				printf("Digite seu salario: ");
				__fpurge(stdin);
				scanf("%f",&fuc[i].salario);
				acum1 = acum1 + fuc[i].salario;
			break;
			case 2:
				cont2;
				fuc[i].codigo = 2;
				printf("Digite seu nome: ");
				__fpurge(stdin);
				scanf(" %[^\n]s",fuc[i].nome);
				printf("Digite seu salario: ");
				__fpurge(stdin);
				scanf("%f",&fuc[i].salario);
				acum2 = acum2 + fuc[i].salario;
			break;
			case 3:
				cont3;
				fuc[i].codigo = 3;
				printf("Digite seu nome: ");
				__fpurge(stdin);
				scanf(" %[^\n]s",fuc[i].nome);
				printf("Digite seu salario: ");
				__fpurge(stdin);
				scanf("%f",&fuc[i].salario);
				acum3 = acum3 + fuc[i].salario;
			break;
			case 4:
				cont4;
				fuc[i].codigo = 4;
				printf("Digite seu nome: ");
				__fpurge(stdin);
				scanf(" %[^\n]s",fuc[i].nome);
				printf("Digite seu salario: ");
				__fpurge(stdin);
				scanf("%f",&fuc[i].salario);
				acum4 = acum4 + fuc[i].salario;
			break;
			default:
				printf("opção errada\n");

		}
	}

	printf("******************************\n");
	fun_maior(fuc);
	printf("******************************\n");
	med1 = med_salario(cont1,acum1);
	med2 = med_salario(cont2,acum2);
	med3 = med_salario(cont3,acum3);
	med4 = med_salario(cont4,acum4);
	
	printf("a média do salario do DP.Secretaria %0.2f\n",med1);
	printf("a média do salario do DP.Secretaria %0.2f\n",med2);
	printf("a média do salario do DP.Secretaria %0.2f\n",med3);
	printf("a média do salario do DP.Secretaria %0.2f\n",med4);
	printf("******************************\n");
	return 0;
}