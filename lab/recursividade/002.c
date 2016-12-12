#include <stdio.h>

int potencia(int k, int n);

int main()
{
  int k = 2, n = 5;
  int resultado = potencia(k, n);
  printf("%d\n", resultado);
  return 0;
}

int potencia(int k, int n) // funcao que calcula a potencia de um numero , onde recebe como paraemtro dois numeros inteiros 
{
   int m; //inicia uma variavel auxiliar 
  if (n == 0) // se o expoente for igual a 0
    return 1; 
  else if (n % 2 ==0) // se o resto do numero que é o expoente for igual a 0
  {
    m = potencia (k, n/2); // a variavel recebe o valor da chama da funcao recursiva 
    return m*m; //retorna a varivel multiplicada pela variavel
  }
  else
    return (k * potencia(k, n-1)); //condicao que retorna base * o resultado da funcao decrementando 1
}
