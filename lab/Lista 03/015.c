#include <stdio.h>

int fibo(int n);

int main(int argc, char const *argv[]) {

  int n = 20;

  for (int i = 1; i <= 20; i++)
  {
    printf("%d ", fibo(i));
  }

  return 0;
}

int fibo(int n)
{

  if (n == 0 || n == 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }

  return fibo(n-1) + fibo(n-2);

}
