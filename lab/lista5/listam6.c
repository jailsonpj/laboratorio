#include <stdio.h>
#include <stdlib.h>
#define la 3
#define ca 3
#define lb 3
#define cb 3
void ler_matriz( int **mat)
{
	int i,j;
    for ( i = 0; i < la; i++)
    {
        for (j = 0; j < ca; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void ler_matriz2( int **mat)
{
	int i,j;
    for ( i = 0; i < lb; i++)
    {
        for (j = 0; j < cb; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_mazea (int **mat){
    int i,j;
    for(i=0;i<la;i++){
        for(j=0;j<ca;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void print_mazeb (int **mat){
    int i,j;
    for(i=0;i<lb;i++){
        for(j=0;j<cb;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void mult_maze (int **mata,int **matb,int **matc)
{
    int i,j,x,aux=0;
    for(i=0;i<la;i++)
    {
        for(j=0;j<cb;j++)
        {
            matc[i][j]=0;
            for(x=0;x<lb;x++)
            {
                aux += mata[i][x] * matb[x][j];
            }
            matc[i][j] = aux;
            aux = 0;
        }
    }

}

void print_mazec (int **mat){
    int i,j;
    for(i=0;i<la;i++){
        for(j=0;j<cb;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


int main(int argc,const char *argv[])
{
        int i,j;
        int **matA,**matB,**matC;

        matA = (int**)malloc(sizeof(int)*la);
        matB = (int**)malloc(sizeof(int)*lb);
        matC = (int**)malloc(sizeof(int)*la);

        for(i=0;i<la;i++)
        {
            matA[i] =(int**)malloc(sizeof(int)*ca);
        }

        for(i=0;i<lb;i++)
        {
            matB[i] = (int**)malloc(sizeof(int)*cb);
        }
        for(i=0;i<la;i++)
        {
            matC[i] = (int**)malloc(sizeof(int)*cb);
        }

        ler_matriz(matA);
        printf("matriz A:\n");
        print_mazea(matA);
        ler_matriz2(matB);
        printf("matriz b:\n");
        print_mazeb(matB);
        mult_maze(matA,matB,matC);
        printf("matriz de multiplicacao:\n");
        print_mazec(matC);

    return 0;
}
