#include <stdio.h>

int imprime_100(int x);

int main(int argc, char const *argv[]) {

  int x;

  for (x = 1; x <= 100; x++)
  {
    printf("%d ", imprime_100(x));
  }

  printf("\n");
  return 0;
}

int imprime(int x)
{
  return x;
}
