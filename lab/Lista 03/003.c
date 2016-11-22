#include <stdio.h>

int main(int argc, char const *argv[]) {


  int count = 0;

  for (int i = 1; i < 1000; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
      count+=1;
    }
    if (count == 100)
    {
      break;
    }
  }

  return 0;
}
