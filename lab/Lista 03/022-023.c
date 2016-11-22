#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int idade = 0,
      porcentagem = 0,
      cont = 0,
      maior_idade = 0;
  char sexo[40],
       olhos[40],
       cabelos[40];

  do
  {
    cont++;
    printf("Sexo (feminino, masculino): \n");
    scanf("%s", &sexo);
    printf("Cor dos olhos (azul, verde, castanho): \n");
    scanf("%s", &olhos);
    printf("Cor dos cabelos (louro, castanho, preto): \n");
    scanf("%s", &cabelos);
    printf("Idade: \n");
    scanf("%d", &idade);
    if ((strcmp(sexo,"feminino") == 0) && ((idade >= 18) && (idade <= 35)) && ((strcmp(olhos,"verde"))) && (strcmp(cabelos, "louro")))
    {
      porcentagem++;
    }
    if (idade > maior_idade)
    {
      maior_idade = idade;
    }
  }while(idade!=-1);

  printf("Maior idade = %d\n", maior_idade);
  printf("\nPorcentagem feminina = %.3f", (porcentagem * 100)/cont);

  return 0;
}
