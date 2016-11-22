#include <stdio.h>

int main()
{

  char zx;
  int n1, n2;


  printf("***** Insira qual operação deseja fazer *****\n");
  printf("'+' para Adição\n'-' para Subtração\n'*' para Multiplicação\n'/' para Divisão\n");
  scanf("%c", &zx);

  printf("Insira o primeiro valor: "); scanf("%d", &n1);
  printf("Insira o segundo valor: "); scanf("%d", &n2);


  if (zx == '+') printf("Valor da soma entre %d e %d = %d\n", n1, n2, (n1+n2));
  else if (zx == '-') printf("Valor da subtração entre %d e %d = %d\n", n1, n2, (n1-n2));
  else if (zx == '*') printf("Valor da multiplicação entre %d e %d = %d\n", n1, n2, (n1*n2));
  else if (zx == '/') printf("Valor da divisão entre %d e %d = %d\n", n1, n2, (n1/n2));

  return 0;
}
