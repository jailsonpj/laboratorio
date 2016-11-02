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

void verifica(int **mat,int vet[],int veti[])
{
    int i,j,cont,conti;
    cont = 0;
    conti = 0;
    for(i=0;i<l;i++){
        //cont = 0;
        for(j=0;j<c;j++){
            if(mat[i][j]%2 == 0)
            {
                vet[cont] = mat[i][j];
                cont++;
            }
            else{
                veti[conti] = mat[i][j];
                conti++;
            }
        }
    }


}

void print_vet(int vet[])
{
    int i;
    for(i=0;i<9;i++)
    {
        if(vet[i] != NULL)
            printf("%d ",vet[i]);
    }

}


int main(int argc,const char *argv[])
{
        int i,j;
        int *vetp,*veti;
        int **mat;

        vetp = (int*)malloc(sizeof(int)*9);
        veti = (int*)malloc(sizeof(int)*9);

        mat = (int**)malloc(sizeof(int)*l);
        for(i=0;i<l;i++)
        {
            mat[i]=(int**)malloc(sizeof(int)*c);
        }

        ler_matriz(mat);
        print_maze(mat);
        verifica(mat,vetp,veti);
        printf("vetor de pares:\n");
        print_vet(vetp);
        printf("\n vetor de ímpares:\n");
        print_vet(veti);



    return 0;
}
