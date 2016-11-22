#include <stdio.h>

int main()
{

  int horas_trabalhadas;
  long double aliquota, valor_hora, salario_bruto, salario_liquido, inss, imposto_de_renda;

  printf("Insira quantas horas foram trabalhadas: "); scanf("%d", &horas_trabalhadas);
  printf("E quanto vale a hora trabalhada: "); scanf("%Lf", &valor_hora);

  salario_bruto = horas_trabalhadas * valor_hora;
  inss = salario_bruto * (0.11);

  if (salario_bruto <= 1257.1)
  {
    salario_bruto = salario_bruto - inss;
  }

  if (salario_bruto >= 1257.13 && salario_bruto <=2512.08)
  {
    aliquota = salario_bruto * 0.15;
    imposto_de_renda = aliquota * (salario_bruto - inss) - (188.57);
  }
  if (salario_bruto > 2512.08)
  {
    aliquota = salario_bruto * (0.275);
    imposto_de_renda = aliquota * (salario_bruto - inss) - (502.58);
  }

  salario_liquido = salario_bruto - inss - imposto_de_renda;

  printf("Seu salário real(liquido) é R$ %.2Lf\n", salario_liquido);

  return 0;
}
