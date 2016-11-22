/*
  1.Escreva um algoritmo que leia dois números e mostre o produto desses números.
*/

#include <stdio.h>

int main()
{

  int number1,
      number2;

  printf("Insira o primeiro valor: ");
  scanf("%d", &number1);
  printf("Insira o segundo valor: ");
  scanf("%d", &number2);

  printf("O produto entre os dois valores é = %d\n", (number1*number2));

  return (0);
}
