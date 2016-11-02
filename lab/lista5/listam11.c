#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 3
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

void soma_linha (int **mat,int maior,int cont)
{
    int i,j;


        for(j=0;j<c;j++)
        {
            mat[cont][j] = mat[cont][j] + maior;
        }



}

void verifica_maior(int **mat)
{
    int i,j;
    int maior = 0;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
        soma_linha(mat,maior,i);
    }
//soma_linha(mat,maior);
    print_maze(mat);
}
int main (int argc,const char *argv[])
{
    int i,j;
    int **mat;
    mat = (int**)malloc(sizeof(int)*l);
    for(i=0;i<l;i++)
    {
        mat[i]=(int**)malloc(sizeof(int)*c);
    }
    ler_matriz(mat);
    print_maze(mat);
    verifica_maior(mat);

    return 0;
}
