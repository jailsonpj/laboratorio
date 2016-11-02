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
int qnt_primo (int **mat)
{
    int i,j,cont,w,k;
    int qnt = 0;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i == j)
            {
                    if(mat[i][j]%mat[i][j]==0 && mat[i][j]%2 != 0 ||mat[i][j] %2 == 0)
                    {
                        qnt++;
                    }
            }


        }
    }
    return qnt;
}



int main (int argc,const char *argv[])
{
    int i,j,resul;
    int **mat;
    mat = (int**)malloc(sizeof(int)*l);
    for(i=0;i<l;i++)
    {
        mat[i]=(int**)malloc(sizeof(int)*c);
    }
    ler_matriz(mat);
    print_maze(mat);
    resul = qnt_primo(mat);
    printf("a quantidade de primos da diagonal principal é %d\n",resul);
    //qnt_primo(mat);
    return 0;
}
