#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, y;
  scanf("%d", &x);

  for (int i = 1; i <= 100; i++)
  {
    y+=x+i;
  }

  printf("%d\n", y);

  return 0;
}
