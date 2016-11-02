/*
 * =====================================================================================
 *
 *       Filename:  exer5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 13:43:35
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

int main (int argc,const char * argv[]){
	int cont = 0;
	int i;

	for(i=1;i<=100;i++){
		cont = cont + i;
		printf("%d\n",i);
	}
	printf("%d\n",cont);

 return 0;
}

