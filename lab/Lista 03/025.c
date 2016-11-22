#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  double a, seno_a;

  scanf("%f", &a);

  seno_a = a - (pow(a,3)/6) + (pow(a,5)/120) - (pow(a,7)/5040);

  printf("%f\n", seno_a);

  return 0;
}
