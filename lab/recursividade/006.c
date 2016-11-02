#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara_string_r (char *nome1, char *nome2);

int main()
{
  char *nome1, *nome2;
  int resultado;
  nome1 = (char *) malloc(sizeof(char));
  nome2 = (char *) malloc(sizeof(char));

  scanf("%s %s", nome1, nome2);
  resultado = compara_string_r(nome1, nome2);

  if (resultado == 0)
    printf("\n\nTrue\n\n");
  else
    printf("\n\nFalse\n\n");
  return 0;
}

/* Compara os dois ponteiros de string e caso
 * eles forem iguais retornará 0 (zero), caso
 * contrário retornará um valor qualquer di -
 * ferente de 0 (zero);
*/
int compara_string_r (char *nome1, char *nome2)
{
  if (*nome1 == '\0' || *nome1 != *nome2)
    return (*nome1 - *nome2);
  else return (compara_string_r(nome1+1, nome2+1));
}
