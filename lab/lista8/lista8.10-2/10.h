#define MAX_LOJA 5 // Número de lojas
#define MAX_PROD 10 //Número de produtos por loja (MAX)
#define MAX_NOME 256
/*
#define CADEMP(DST,SRC) memcpy(DST,SRC,sizeof(SRC))
#define CADPNOME(DST,SRC) memcpy(DST,SRC,sizeof(SRC))
*/
typedef struct TipoProduto Produto;
struct TipoProduto
{
  char nomeProd[MAX_NOME];
  unsigned int quantProd;
  double precoProd;
};

typedef struct TipoLoja Loja;
struct TipoLoja
{
  char nomeLoja[MAX_NOME];
  Produto itens[MAX_PROD]; // estrutura com todos os dados de um produto
};

Loja lojas[MAX_LOJA]; // Quantidade possível de lojas


/* Menu que mostra as opcoes disponiveis */
void menu()
{
  printf("-***************- MENU -***************-\n\n");
  printf("\t 1 -> Nova loja \n");
  printf("\t 2 -> Incluir produto \n");
  printf("\t 3 -> Mostrar loja e produtos \n");
  printf("\t 4 -> Sair \n\n");
  printf("-**************----------**************-\n\n");
}

int verificaLoja (char nomeLoja[])
{
  char zerado[MAX_NOME];
  memset (zerado, 0, sizeof(zerado));
  int posVazia;
  for (posVazia = 0; posVazia < MAX_LOJA; posVazia++)
    if (strcmp(lojas[posVazia].nomeLoja, zerado) == 0)
      break;

  if (posVazia == 0)
    return -1; // lista de lojas vazia

  int aux;
  for (aux = 0; aux < posVazia; aux++)
    if (strcmp(lojas[aux].nomeLoja, nomeLoja) == 0)
      return aux; // empresa existe

  if (aux == posVazia && posVazia == MAX_LOJA)
    return -2; // lista cheia sem loja

  return aux; // posição que a loja será inserida na lista
}

int verificaProduto(char nomeProd[], int lPosicao)
{
  char zerado[MAX_NOME];
  memset (zerado, 0, sizeof(zerado));
  int pPosicao; // posicao produto
  for (pPosicao = 0; pPosicao < MAX_LOJA; pPosicao++)
    if (strcmp(lojas[lPosicao].itens[pPosicao].nomeProd, zerado) == 0)
      break;

  if (pPosicao == 0)
    return -1; // lista vazia

  int aux;
  for (aux = 0; aux < pPosicao; aux++)
    if (strcmp(lojas[lPosicao].itens[aux].nomeProd, nomeProd) == 0)
      return aux; // posição do produto existente na lista

  if (aux == pPosicao && pPosicao == MAX_LOJA)
    return -2; // lista cheia sem o produto

  return aux; // posição que a produto será inserida na lista
}

int cadastrarProduto (int posicao)
{
  char nomeAux[MAX_NOME];
  int pPosicao; // posicao que (talvez) produto será inserido
  printf("\nNome do Produto: ");
  scanf("%s", &nomeAux);

  pPosicao = verificaProduto(nomeAux, posicao);

  if (pPosicao == -2)
    puts("\nLISTA JÁ ESTÀ CHEIA");
  else if (pPosicao > -1 && strcmp(lojas[posicao].itens[pPosicao].nomeProd, nomeAux) == 0)
    puts("\nPRODUTO JÁ EXISTE NA LISTA");

  else
  {
    if (pPosicao == -1 ) strcpy(lojas[posicao].itens[0].nomeProd,nomeAux);
    else strcpy(lojas[posicao].itens[pPosicao].nomeProd,nomeAux);

    printf("\nQuantidade do Produto: ");
    if (pPosicao == -1) scanf("%d", &lojas[posicao].itens[0].quantProd);
    else scanf("%d", &lojas[posicao].itens[pPosicao].quantProd);

    printf("\nPreço do Produto: ");
    if (pPosicao == -1) scanf("%f", &lojas[posicao].itens[0].precoProd);
    else scanf("%d", &lojas[posicao].itens[pPosicao].precoProd);
  }
}

void exibeLoja()
{
  char zerado[MAX_NOME];
  memset(zerado,0,sizeof(zerado));

  for (int i = 0; i < MAX_LOJA && strcmp(lojas[i].nomeLoja, zerado) != 0; i++)
  {
    printf("Nome da Loja: [ %s ]", lojas[i].nomeLoja);
    for (int j = 0; j < MAX_PROD && strcmp (lojas[i].itens[j].nomeProd, zerado) != 0; j++)
    {
      printf("\n\nPRODUTO: %s", lojas[i].itens[j].nomeProd);
      printf("\nQUANTIDADE: %d", lojas[i].itens[j].quantProd);
      printf("\nPREÇO: %.2f\n",lojas[i].itens[j].precoProd);
    }
    puts("");
  }
}

void executaOpt (int opt)
{
  char nomeAux[MAX_NOME];
  int posicao;

  if (opt == 0) puts("Saindo do programa");

  if (opt == 1)
  {
    printf("\nNome da Empresa: ");
    scanf("%s", &nomeAux);
    posicao = (verificaLoja(nomeAux));

    if (posicao == -2) puts("\nLIASTA CHEIA");
    else if (posicao > -1 && strcmp(lojas[posicao].nomeLoja, nomeAux) == 0)
      puts("\nEMPRESA JÁ EXISTE");
    else
    {
      if (posicao == -1) strcpy(lojas[0].nomeLoja, nomeAux);
      else strcpy(lojas[posicao].nomeLoja, nomeAux);
    }
  }

  else if (opt == 2)
  {
    printf("\nNome da empresa: ");
    scanf("%s", &nomeAux);
    posicao = verificaLoja(nomeAux);

    if (posicao > -1 && strcmp(lojas[posicao].nomeLoja, nomeAux) == 0)
      cadastrarProduto(posicao);
    else
      puts ("\nEMPRESA NÃO EXISTE");
  }

  else if (opt == 3)
    exibeLoja();
}
