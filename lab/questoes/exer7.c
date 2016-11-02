/*
 * =====================================================================================
 *
 *       Filename:  exer7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 14:06:25
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

int main(int argc,const char argv[]){
	int i,num;
	int acum = 1;

	printf("digite numero: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++){
		acum = acum * i;
		printf("%d\n",i);
	}
	printf("%d\n",acum);
 return 0;	

}
