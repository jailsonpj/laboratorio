#include <stdio.h>

int fib (int n);

int main()
{
  int n = 20;
  for (int i = 0; i <= n; i++)
    printf("%d ", fib(i));
  printf("\n");
  return 0;
}

int fib (int n)
{
  if ( n == 0)
  {
    return 0;
  }
  else if (n == 1 || n == 2)
    return 1;
  else
    return fib (n-1) + fib (n-2);

}
