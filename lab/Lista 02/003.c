#include <stdio.h>

int main(int argc, char const *argv[]) {


  int a, b;
  unsigned int z;

  scanf ("%d %d", &a, &b);

  z = a - b;

  if (a==b) printf("%d\n",a+b);

  else if (a < b) printf("%d\n", z*-1);
  else if (a > b) printf("%d\n", z);

  return 0;
}
