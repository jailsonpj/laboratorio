/*
 * =====================================================================================
 *
 *       Filename:  exer16.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07-09-2016 19:31:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>

int fat (int n){
	if(n == 1){
		return 1;
	}
	else{
		return n*fat(n-1);
	}
}

int main (int argc,const char *argv[]){
	int n,f;
	
	printf("digite numero para calcular o fatorial:\n");
	scanf("%d",&n);

	f = fat(n);

	printf("o fatorial de %d é %d\n",n,f);


	return 0;

}
