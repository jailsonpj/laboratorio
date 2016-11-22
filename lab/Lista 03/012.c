#include <stdio.h>

int main(int argc, char const *argv[]) {

  float s;
  int n, k;

  scanf("%d", &n);
  k = n;
  s = 1/n;

  for (int i = 2; i <= n; i++)
  {
    k-=1;
    s+=(i/k);
  }

  printf("%.2f\n", s);

  return 0;
}
