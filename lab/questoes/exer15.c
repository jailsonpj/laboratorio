/*
 * =====================================================================================
 *
 *       Filename:  exer15.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07-09-2016 14:42:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

void fibo (int x){
	int i;
	int ant = 0,ter = 1,atual;
	for(i=0;i<x;i++){
		atual = ant + ter;
		ant = ter;
		ter = atual;
	
		printf("%d\n",atual);
	}
}
int main (int argc,const char *argv[]){
	int fi,i;
	printf("digite até qual numero;\n");
	scanf("%d",&i);
	printf("série fibonacci:\n");
	printf("1\n");
	fibo(i);

	//printf("%d\n",fi);

	return 0;
}
