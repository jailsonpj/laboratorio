#include <stdio.h>

int main(int argc, char const *argv[]) {
  float caixa, pr;
  int qtd;
  float valor_total;

  printf("Insira o valor em caixa: "); scanf("%f", &caixa);
  printf("Insira o quantidade de produtos: "); scanf("%d", &qtd);
  printf("O preço da unidade: "); scanf("%f", &pr);

  valor_total = qtd * pr;

  if (valor_total > (caixa * 0.8))
  {
    printf("A compra será feita em 3x, com juros de 10(por cento), e será no valor de R$ %.2f reais\n", (valor_total + valor_total * 0.1));
    printf("A parcela será de R$ %.2f\n", (valor_total + valor_total * 0.1)/3);
  }
  else
  {
    printf("A compra será feita a vista, com desconto de 5(por cento), valor = %.2f\n",  (valor_total - valor_total * 0.05));
  }

  return 0;
}
