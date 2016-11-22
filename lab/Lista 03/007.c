#include <stdio.h>

int main(int argc, char const *argv[]) {

  int
    n,
    prod = 1;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  	{
  		prod*=i;
  		printf("%d ", i);
	}

  printf("\n%d\n", prod);

  return 0;
}
