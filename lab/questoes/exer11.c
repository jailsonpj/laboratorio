/*
 * =====================================================================================
 *
 *       Filename:  exer11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 15:40:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

float fat (float n ){
	if (n == 1 ){
		return 1;
	}else{
		return n*fat(n-1);
	}
}

int main (int argc,const char *argv[]){
	float i,n,x,resul;
	float y=0;
	
	printf("digite o valor de X: ");
	scanf("%f",&x);
	printf("digite o valor de N: ");
	scanf("%f",&n);
	
	for(i=1;i<=n;i++){
		y = y + (x+i)/fat(i);
	}
	
	printf("a expressão é %0.2f\n",y);
 return 0;
}
