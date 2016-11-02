/*
 * =====================================================================================
 *
 *       Filename:  exer13.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 17:46:09
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
#define tam 10

int maior (int vet []){
	int i,ma;
	ma = vet[0];
	for(i=0;i<tam;i++)
	{
		if(vet[i] > ma)
		{
			ma = vet[i];
		}
	}
	return ma;
	
}

int menor (int vet[]){
	int i,me;
	me = vet[0];
	for(i=0;i<tam;i++)
	{
		if(vet[i] < me)
		{
			me = vet[i];
		}
	}
	return me;
}

int main (int argc,const char * argv[]){
//	int *vet;
	int i,resul,resul1;

	int *vet = (int*)malloc(tam*sizeof(int));
	printf("preencha vetor com 10 números:\n");
	for(i=0;i<tam;i++){
		scanf("%d",&vet[i]);
		
	}
	//fflush(stdin);
	
	resul = maior(vet);
	resul1 = menor(vet);

	printf("o maior numero do vetor é %d\n",resul);
	printf("o menor numero do vetor é %d\n",resul1);

	free(vet);
 return 0;
}
