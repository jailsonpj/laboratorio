#include <stdio.h>

int divide (int a, int b);

int main()
{
  int a = 144, b = 5;
  int resultado = divide (a, b);
  printf("%d\n", resultado);
  return 0;
}

int divide (int a, int b)
{
  if (a < b)
    return 0;
  else
    return (divide(a-b,b) + 1); // O +1 representa o sinal se -1 é negativo

}
