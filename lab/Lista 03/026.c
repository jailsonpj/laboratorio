#include <stdio.h>

int main(int argc, char const *argv[]) {

  int s;

  for (int i = 1; i <= 10; i++)
  {
    if (i%2 != 0)
    {
      s += i*(i*i);
    }
    else
    {
      s -= i*(i*i);
    }
  }

  printf("%d\n", s);

  return 0;
}
