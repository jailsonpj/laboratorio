#include <stdio.h>

int main()
{

  float pe;
  int cp;

  printf("Insira o preço de etiqueta: "); scanf("%f", &pe);
  printf("Insira a condição de pagamento [1-4]: "); scanf("%d", &cp);

  if (cp == 1) printf("À vista com 10% de desconto = R$ %.2f\n", pe-(pe*0.1));
  if (cp == 2) printf("À vista com cartão de crédito = R$ %.2f\n", pe-(pe*0.05));
  if (cp == 3) printf("Em 2 vezes, parcelas de R$ %.2f\n", pe/2);
  if (cp == 4) printf("Em 3 vezes, parcelas de R$ %.2f\n", pe/3);

  return 0;
}
