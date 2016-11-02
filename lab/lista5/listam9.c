#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 2
void ler_matriz( int **mat)
{
	int i,j;
    for ( i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_maze (int **mat){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void soma_col (int **mat, int vet[])
{
    int i,j;
    int soma = 0;

    for(j=0;j<c;j++)
    {
        for(i=0;i<l;i++)
        {
            soma = soma + mat[i][j];
        }
        vet[j] = soma;
        soma = 0;
    }

    printf("o vetor de soma das colunas:\n");
    for(j=0;j<c;j++)
    {
        printf("%d ",vet[j]);
    }

}

int main (int argc,const char *argv[])
{
    int i,j;
    int *vet;
    int **mat;
    vet = (int*)malloc(sizeof(int)*c);
    mat = (int**)malloc(sizeof(int)*l);
    for(i=0;i<l;i++)
    {
        mat[i]=(int**)malloc(sizeof(int)*c);
    }
    ler_matriz(mat);
    print_maze(mat);
    soma_col(mat,vet);



    return 0;

}
