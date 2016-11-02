/*
 * =====================================================================================
 *
 *       Filename:  exer9.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 14:35:11
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

int main (int argc , const char * argv[]){
	int i,x,y;
	int acum = 0;
	printf("digite numero: ");
	scanf("%d",&x);
	for(i=1;i<=100;i++){
		acum = acum + (x+i);
	}
	y = acum;
	printf("%d\n",y);

 return 0;
}
