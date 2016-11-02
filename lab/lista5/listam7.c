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


void minimax (int **mat)
{
    int i,j;
    int maior,cmax,lmax,menor;
    maior = 0;
    //verifica a linha onde está o maior elemento
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
                lmax = i;
            }
        }
    }

    menor = 10000000;
    for(i=0;i<c;i++)
    {
        if(mat[lmax][i] < menor)
        {
            menor = mat[lmax][i];
            cmax = i;
        }
    }

    printf("o minimax está em %d:%d\n",lmax,cmax);
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
    minimax(mat);


    return 0;
}
