#include <stdio.h>
#include <stdlib.h>
#define l 2
#define c 3

void leMatriz( int **mat)
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



int main(int argc,const char *argv[]){
    int i,j;
    int maior = 0;
    int *vet;
    int **mat;
    mat = (int**)malloc(sizeof(int)*l);
    vet = (int*)malloc(sizeof(int)*l);
   for (i = 0; i < l; i++)
          mat[i] = (int *)malloc(sizeof(int)*c);
          
	
    leMatriz(mat);  
    print_maze(mat);

    for(i=0;i<l;i++){
           // int maior = 0;
        for(j=0;j<c;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        vet[i] = maior;
         maior = 0;
    }
    printf("\n");

    for(i=0;i<l;i++){
        printf("%d ",vet[i]);
    }


 return 0;
}
