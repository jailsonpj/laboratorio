/*
 * =====================================================================================
 *
 *       Filename:  exer20.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12-09-2016 20:40:13
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

int fat (float n)
{
	if(n == 1){
		return 1;
	}
	else
	{
		return n*fat(n-1);
	}
}

int main (int argc,const char *argv[])
{
	int i,n;
	float acum = 0;
 	float num = 20;
	for(i=1;i<=20;i++)
	{
		acum = acum + num/fat(i);
		num--;
	}

	
	printf("%f",acum);
	return 0;

}
