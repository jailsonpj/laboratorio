#include <stdio.h>
#include <stdlib.h>
#define l 2
#define c 2

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

int verifica_maior(int **mat){
	int i,j;
	int maior = mat[0][0];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(mat[i][j] > maior){
				maior = mat[i][j];
			}
		}
	}
	
	return maior;
}

int verifica_menor(int **mat){
	int i,j;
	int menor = mat[0][0];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(mat[i][j] < menor){
				menor = mat[i][j];
			}
		}
	}
	return menor;
}


int main(int argc,const char *argv[]){
    int i,j;
   int maior,menor;
    int **mat;
    mat = (int**)malloc(sizeof(int)*l);
   // vet = (int*)malloc(sizeof(int)*l);
   for (i = 0; i < l; i++)
          mat[i] = (int *)malloc(sizeof(int)*c);
          
	
    leMatriz(mat);  
    print_maze(mat);
    maior = verifica_maior(mat);
    menor = verifica_menor(mat);
    printf("o menor é %d\n",menor);
    printf("o maior é %d\n",maior);
	
	
	
	return 0;
}
