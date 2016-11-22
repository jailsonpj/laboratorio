#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char clube_pref[20], cidade_origem[40];
  double salario, salario_inter, salario_gremio;
  int num_torcedores_gremio,
      num_torcedores_inter,
      num_torcedores_outros,
      nascidos_pa,
      num_entrevistados;
  int i = 0, count;

  do {
    count++;
    printf("Clube de preferência (Grêmio, Internacional, Outros): ");
    scanf("%s", &clube_pref);
    printf("Seu salário: ");
    scanf("%f", &salario);
    printf("Cidade de origem (Porto Alegre, Outros): ");
    scanf("%s", &cidade_origem);
    
    if (strcmp(clube_pref, "Grêmio") == 0)
    {
      num_torcedores_gremio++;
      salario_gremio+=salario;
    }
    else if (strcmp(clube_pref, "Internacional") == 0)
    {
      num_torcedores_inter++;
      salario_inter+=salario;
    }
    else if (strcmp(clube_pref,"Outros") == 0)
    {
      num_torcedores_outros++;
    }
    if ((strcmp(clube_pref,"Grêmio") != 0) && (strcmp(cidade_origem, "Outros")))
    {
      i++;
    }
    else if ((strcmp(clube_pref,"Internacional") != 0) && (strcmp(cidade_origem, "Outros")))
    {
      i++;
    }
  } while(salario>0);


  printf("Número de torcedores do Grêmio = %d\n", num_torcedores_gremio);
  printf("Número de torcedores do Internacional = %d\n", num_torcedores_inter);
  printf("Número de torcedores de outros times = %d\n", num_torcedores_outros);
  //printf("Média salarial dos torcedores do Grêmio e Internacional");
  //printf("Número de pessoas entrevistadas = %d", )

  return 0;
}
