/*
 * =====================================================================================
 *
 *       Filename:  exer19.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09-09-2016 19:13:00
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

int primo (int n)
{
	int i,j,cont;

	for(i=0;i<=n;i++)
	{
		cont=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cont++;
			}
		}
		if(cont==2)
		{
			return 1;
		}
	}
}

int main(int argc,const char *argv[])
{
	int n = 20,i;

	for(i=1;i<=n;i++)
	{
		if(primo(n)==1)
		{
			printf("%d",i);
		}
	}

	

	return 0;

}
