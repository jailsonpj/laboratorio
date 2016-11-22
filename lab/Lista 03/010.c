#include <stdio.h>
#include <math.h>

int abc(int x);

int main(int argc, char const *argv[]) {

  double s, pi;
  int i = 1, x = 1;
  while ( i <= 51)
  {
    s+=(1/pow(x,3));
    i++;
    x+=2;
  }

  pi = s*32;
  //pi = pow(pi,(1.0/3.0));
  pi = abc(pi);

  printf("%.5f\n",pi);
  return 0;
}

int abc(int x)
{
  x = pow(x,(1.0/3.0));

  return x;
}
