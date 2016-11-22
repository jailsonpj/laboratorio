#include <stdio.h>

int main(int argc, char const *argv[]) {

  int cont = 100;
  do {
    printf("%d\n", cont);
    cont--;
  } while(cont!=0);

  return 0;
}
