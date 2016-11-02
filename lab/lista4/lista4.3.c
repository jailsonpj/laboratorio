/*
 * =====================================================================================
 *
 *       Filename:  lista4.3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26-09-2016 17:17:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int primo (int n)
{
     if (n > 0 )
     {
          if(n%2 != 0 && n%n == 0 && n%1 == 0)
          {
               return 1;
          }

          else
           {
               return 0;
           }
     }
}

void imprime (int n)
{
     if(n == 1 )
     {
          printf("o numero é primo \n");
     }
     else
     {
          if(n == 0)
          {
               printf("o numero não é primo\n");
          }
     }
}

int main(int argc,const char *argv[])
{
     int n,p;
     scanf("%d",&n);
     p = primo(n);
     imprime(p);


     return 0;
}
