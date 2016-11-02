/*
 * =====================================================================================
 *
 *       Filename:  exer6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-09-2016 13:54:53
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
	int i,met,num;
	 for(i=1;i<=10;i++){
		 scanf("%d",&num);
		 met = num/2;
		 printf("metade de %d é %d\n",num,met);
	 }
	// for(i=1;i<=10;i++){
	//	 met = num/2;
//		 printf(" metade de %d é %d\n",num,met);
//	 }
 return 0;
}

