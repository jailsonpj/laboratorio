#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a1,a2,n;

  scanf("%d %d", &a1,&a2);

  for (int i = 3; i <= 10; i++)
  {
    if (i%2 == 0)
    {
      n = a2-a1;
    }
    else
    {
      n = a2+a1;
    }
    printf("%d ", n);
    a1=a2;
    a2=n;
  }

printf("\n");
  return 0;
}
