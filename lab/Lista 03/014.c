#include <stdio.h>

int main(int argc, char const *argv[]) {

  int idade, op, a_media, b_quant;
  int count_excelente, count_bom, count_regular, count_geral;
  double c_porcento;

  for (int i = 0; i < 10; i++)
  {
    printf("Insira sua idade: ");
    scanf("%s", &idade);
    printf("Insira o número de sua avaliação (1 - regular, 2 - bom, 3 - excelente): ");
    scanf("%d", &op);
    if (op == 1)
    {
      count_regular++;
    }
    else if (op == 2)
    {
      count_bom++;
    }
    else if (op == 3)
    {
      a_media+=idade;
      count_excelente++;
    }
    count_geral++;
  }

  printf("A média das idades de quem escolheu 'excelente' é = %d\n", a_media/count_excelente);
  printf("Quantidade de pessoas que responderam 'regular' = %d\n", count_regular);
  printf("Porcentagem que responderam 'bom' = %.2f", (count_bom/100)*10);


  return 0;
}
