#include <stdio.h>

int main(int argc, char const *argv[]) {

  float farh;

  scanf("%f", &farh);

  printf("Temperatura em celsius = %.2f\n", (farh-32)/1.8);
  return 0;
}
