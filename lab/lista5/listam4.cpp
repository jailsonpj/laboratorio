#include <stdio.h>
#include <stdlib.h>
#define l 2
#define c 3
#define v 6


void le_matriz( int **mat)
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

void verifica_primo (int **mat,int vet[]){
	int i,j,k,w,cont;
	for(k=0;k<l;k++){
		for(w=0;w<c;w++){
		
			for(i=0;i<=mat[k][w];i++){
				cont = 0;
				for(j=1;j<=i;j++){
					if(i%j == 0){
						cont++;
					}
				}
				if(cont == 2)
					vet[k] = mat[k][w];
			}
		}
	}
}

int main (int argc,const char *argv[]){
		int i,j;
		int **mat;
		int *vet;
		vet = (int*)malloc(sizeof(int)*l);
		mat = (int**)malloc(sizeof(int)*l);
		for(i=0;i<l;i++){
			mat[i] =(int*)malloc(sizeof(int)*c);
		}
		
		le_matriz(mat);
		print_maze(mat);
		
		verifica_primo(mat,vet);
		printf("\n");
		
		for(i=0;i<l;i++){
			printf("primos %d ",vet[i]);
		}
		
		
	return 0;
}
