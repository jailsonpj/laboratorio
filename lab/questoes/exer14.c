/*
 * =====================================================================================
 *
 *       Filename:  exer14.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07-09-2016 12:46:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define tam 3
int main (int argc,const char *argv[]){
	
	int i,opcao;
	int acumi=0,acum3=0,acum2=0,acum1=0;
	int idade;
	int me,por;
	
	
//	int *vet =(int*)malloc(tam * sizeof (int));
	
	//printf("digite sua idade:\n");
	//scanf("%d",&idade);
	
	//acumi = acumi+idade;
	for(i=0;i<tam;i++){
		printf("diigite sua didade:\n");
		scanf("%d",&idade);
		printf("\n###################################\n");
		printf("\nsua opinião para o filme:\n");
		printf("Excelente,digite 3\n");
		printf("Bom,digite 2\n");
		printf("Regular,digite 1\n");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
			case 3:
				acum3++;
				acumi = acumi+idade;
				break;
			case 2:
				acum2++;
				break;
			case 1:
				acum1++;
				break;
			default:
				printf("opcao errada\n");
		}
	}

	me = acumi/acum3;
	por = (acum2*100)/20;
	
	printf("\n#####################################################################\n");

	printf("a média das idades das pessoas que responderam excelente é:%d\n",me);
	printf("a quantidade de pessoas que responderam regular é:%d\n",acum1);
	printf("a porcentagem de pessoas que responderam bom em relacao a todos os analisados é:%d\n",por);
	
//	free(vet);
	
	return 0;

}
