/*
 * =====================================================================================
 *
 *       Filename:  lista4.4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26-09-2016 22:07:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<math.h>

int delta (int a,int b,int c)
{
     int delta;
     return delta = (b*b-4*a*c);
}

void imprime(int ra1,int ra2)
{
     printf("a raiz de x1 é %d\n",ra1);
     printf("a raiz de x2 é %d\n",ra2);
}

void raizes ( int a,int b,int c )
{
     int ra1,ra2,d;

     d = delta(a,b,c);

     if(d == 0)
     {
          ra1 =((-b)+sqrt(d))/2*a;
          ra2 =((-b)-sqrt(d))/2*a;
          imprime(ra1,ra2);
     }
     if(d>0)
     {
          ra1=((-b)+sqrt(d))/2*a;
          ra2=((-b)-sqrt(d))/2*a;
          imprime(ra1,ra2);
     }
     if(d<0)
     {
          printf("não tem raizes\n");
     }
}

/*void imprime(int ra1,int ra2)
{
     printf("a raiz de x1 é %d\n",ra1);
     printf("a raiz de x2 é %d\n",ra2);
}*/

int main (int argc,const char *argv[])
{
     int a,b,c;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     raizes(a,b,c);

     return 0;
}
