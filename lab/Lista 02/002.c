#include <stdio.h>

int main()
{

  int sal;
  int novo_sal;

  scanf("%d", &sal);

  if (sal < 500)
    {
      novo_sal = sal+(sal*0.15);
      printf("Seu novo salário é %d\n",novo_sal);
    }

  else if (sal >= 500 && sal <= 1000)
    {
      novo_sal = sal+(sal*0.10);
      printf("Seu novo salário é %d\n", novo_sal);
    }

  else if(sal > 1000)
    {
      novo_sal = sal+(sal*0.05);
      printf("Seu novo salário é %d\n", novo_sal);
    }

  return 0;
}
