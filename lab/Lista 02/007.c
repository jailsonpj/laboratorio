#include <stdio.h>

int main()
{

  int horas_trabalhadas;
  long double aliquota, valor_hora, salario_bruto, salario_liquido, inss, imposto_de_renda;

  printf("Insira quantas horas foram trabalhadas: "); scanf("%d", &horas_trabalhadas);
  printf("E quanto vale a hora trabalhada: "); scanf("%Lf", &valor_hora);

  salario_bruto = horas_trabalhadas * valor_hora;

  if (salario_bruto <= 800.45)
  {
    aliquota = salario_bruto * 0.765;
  }

  if (salario_bruto >= 800.46 && salario_bruto <=900)
  {
    aliquota = salario_bruto * 0.865;
    imposto_de_renda = aliquota * (salario_bruto - inss) - (188.570);
  }
  if (salario_bruto > 2668.15)
  {
    imposto_de_renda = (salario_bruto - 315.50);
  }

  salario_liquido = salario_bruto - inss - imposto_de_renda;

  printf("Seu salário real(liquido) é R$ %.2Lf\n", salario_liquido);


  return 0;
}
