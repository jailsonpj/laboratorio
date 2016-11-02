/*
 * =====================================================================================
 *
 *       Filename:  prova4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11-10-2016 20:09:22
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
#define n 20
#define m 30




void ler_vet1 (int vet[])
{
     int i;
     for(i=0;i<5;i++)
     {
          scanf("%d",&vet[i]);
     }
}

void ler_vet2 (int vet2[])
{
     int i;
     for(i=0;i<10;i++)
     {
          scanf("%d",&vet2[i]);
     }
}

void vet_primo(int vet [],int vet1[])
{
     int i,cont = 0,cont2 =0, tam =0;;

     int vet3[15];
     for(i=0;i<5;i++)
     {
          if(vet[i] % i == 0)
          {
               cont++;
          }
          if(cont == 2 )
          {
              // tam = tam+1;
              // vet3 = malloc(tam *sizeof(int));
               vet3[i] = vet[i];
               tam++;
          }
     }
     for(i=0;i<10;i++)
     {
          if(vet1[i]%i==0)
          {
               cont2++;
          }
          if(cont2 == 2)
          {
               vet3[tam+1] = vet[i];
          }
     }
}

int main()
{
     int vet[5],vet1[10];
     printf("preencha o vetor 1\n");
     ler_vet1(vet);
     printf("preencha o vetor 2\n");
     ler_vet2(vet1);
     vet_primo(vet,vet1);
     

     return 0;
}
