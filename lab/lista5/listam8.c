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

void maior_linha (int **mat, int vet[])
{
    int i,j;
    int maior = mat[0][0];
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
           // vet[i] = maior;
        }
        vet[i] = maior;
    }
    printf("vetor de maior de linha\n");
    for(i=0;i<l;i++)
    {
        //printf("vetor de maior de linha\n");
        printf("%d ",vet[i]);
    }
}

int main (int argc,const char *argv[])
{
    int i,j;
    int *vet;
    int **mat;
    vet = (int*)malloc(sizeof(int)*l);
    mat = (int**)malloc(sizeof(int)*l);
    for(i=0;i<l;i++)
    {
        mat[i]=(int**)malloc(sizeof(int)*c);
    }
    ler_matriz(mat);
    print_maze(mat);
    maior_linha(mat,vet);



    return 0;

}
