/*
 * =====================================================================================
 *
 *       Filename:  exer12.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 16:32:20
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
	float i,n;
	float s;
	
	printf("digite numero: ");
	scanf("%f",&n);

	s = 1/n;
	//y = (n-1)/(1+n);
	for(i=1;i<n;i++){
		s = s +(i+1)/(n-i);
	}
	printf("valor é:%0.2f\n",s);

 return 0;
}
