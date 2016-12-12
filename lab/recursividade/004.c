#include <stdio.h>

int fib (int n);

int main()
{
  int n = 20;
  for (int i = 0; i <= n; i++) //imprime sequencia do fibonnaci 
    printf("%d ", fib(i)); //imprime chamando a funcao fib e passando o valor de i
  printf("\n");
  return 0;
}

int fib (int n) //funcao que calcula o fibonnaci ,recebendo por paremetro um numero inteiro
{
  if ( n == 0) //se n for igual a 0
  {
    return 0;
  }
  else if (n == 1 || n == 2) // se nao e se n for igual a 0 ou n for igual a 2
    return 1;
  else
    return fib (n-1) + fib (n-2); // se nao retorna a funcao passando (n-1) + fib (n-2)

}
