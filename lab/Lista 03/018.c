#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int n, somadiv=0;

  scanf ("%d", &n);

  for (int i=1; i <= n; i++)
  {
    somadiv = 0;
    for (int j=1; j < i; j++)
    {
      if ((i%j)==0)
        somadiv+= j;
    }
    if (i == somadiv)
    {
      printf("%d ",i);
    }
  }
  printf ("\n");
  return 0;
}
