#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x1,x2,y1,y2;

  scanf("%d %d", &x1,&y1);
  scanf("%d %d", &x2,&y2);

  printf("A distância entre os pontos é = %d\n", (((x2-x1)^2 + (y2-y1)^2)*0.5));

  return 0;
}
