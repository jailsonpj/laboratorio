#include <stdio.h>

int main()
{
  int a=0,c,n,d;

  n = 20; // Quantidade de primos que serão exibidos

  d=n*(-1);
  printf("Os primeiros %i numeros primos sao:\n",n);

  do
  {
    a++;
    c=0;
    for(int b=1; b<a; b++)
    {
      if(a%b==0)
        c++;
    }
    if(c==1)
    {
      printf("%i ",a); //Imprimindo os números primos
      d++;
    }
  }while(d); //Repete o bloco enquanto d for diferente de zero 0.

  printf("\n");

  return 0;
}
