/*
 * =====================================================================================
 *
 *       Filename:  exer8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 14:19:41
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
	int i,penul,ulti,ter;
	penul = 0;
	ulti = 1;

	for(i=2;i<=10;i++){
		if(i%2 == 0){
			ter = ulti - penul;
			printf("%d\n",ter);
		}
		else{
			ter = ulti + penul;
			printf("%d\n",ter);
		}
		penul = ulti;
		ulti = ter;
	}
  return 0;
}
