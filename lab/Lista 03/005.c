#include <stdio.h>

int main(int argc, char const *argv[]) {

  int soma;

  for (int i = 1; i <= 100; i++)
    {
  		soma+=i;
  		printf("%d ", i);
	  }

  printf("\n%d\n", soma);

  return 0;
}
