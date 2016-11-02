#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int repeticoes_char_r (char *string, char character);

int main()
{
  char *string;
  char character;
  string  = (char *) malloc(sizeof(char));
  int resultado;
  scanf("%s %s", string, &character);
  resultado = repeticoes_char_r(string, character);

  printf("\n\nResultado = %d\n\n", resultado);

  return 0;
}

/* Incompleta */
int repeticoes_char_r (char *string, char character)
{
  if (*string == character) return 1;
  else if (*string == '\0') return 0;
  else return (repeticoes_char_r(string+1), character));
}
/* Incompleta */
