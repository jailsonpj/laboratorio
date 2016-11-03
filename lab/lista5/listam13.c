
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

void troca (int **mat)
{
	int i,j,temp;
	
	for(i=0;i<c;i++)
	{
		temp = mat[1][i];
		mat[1][i] = mat[2][i];
		mat[2][i] = temp;
	}
	 for (j=0;j<l;j++)
	 {
	 	temp = mat[j][0];
	 	mat[j][0] = mat[j][2];
	 	mat[j][2] = temp;
	 }
}

int main ()
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
    
    
    troca(mat);
    print_maze(mat);
	
	
	return 0;
}
