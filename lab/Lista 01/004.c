#include <stdio.h>

int main()
{
  float n2,
      n1;

  float soma,
        subitracao,
        divisao,
        multiplicacao;


  printf("Insira o primeiro valor: ");
  scanf("%f", &n1);
  printf("Insira o segundo valor: ");
  scanf("%f", &n2);

  soma = n1+n2;
  subitracao = n1-n2;
  divisao = n1/n2;
  multiplicacao = n1*n2;

  printf("O soma dos dois valores é = %.1f\n", (soma));
  printf("A subtração dos dois valores é = %.1f\n", (subitracao));
  printf("A divisão dos dois valores é = %.1f\n", (divisao));
  printf("A multiplicação dos dois valores é = %.1f\n", (multiplicacao));

  return (0);
}
