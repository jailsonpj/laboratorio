/*
 * =====================================================================================
 *
 *       Filename:  lista4.2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26-09-2016 16:44:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
float med (float n1,float n2,float n3,char x[])
{
     float resul;

     if(strcmp(x,"a") == 0)
     {
         return  resul = n1+n2+n3/3;
     }
     if(strcmp(x,"p") == 0)
     {
          return resul = ((n1*5)+(n2*3)+(n3*2))/3;
     }
     if(strcmp(x,"h") == 0)
     {
          return resul = (3/(1/n1)+(1/n2)+(1/n3));
     }
}

int main (int agrc, const char *argv[])
{
     float n1,n2,n3;
     char x[80];
     scanf("%f",&n1);
     scanf("%f",&n2);
     scanf("%f",&n3);
     fflush(stdout);
     scanf("%s",x);

     printf("a media é %0.2f\n",med(n1,n2,n3,x));

     return 0;
     
}
