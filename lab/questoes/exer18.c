/*
 * =====================================================================================
 *
 *       Filename:  exer18.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07-09-2016 20:21:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void perfect(int n)
{
	int i;
	int cont =0;
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
			cont = cont + i;
	}

	if(cont == n){
		printf("é perfeito\n");
	}
	else{
		printf("não é perfeito");
	}

}

int main(int argc,const char *argv[])
{
	int n;

	printf("digite numero:\n");
	scanf("%d",&n);

	perfect(n);

	return 0;
}
