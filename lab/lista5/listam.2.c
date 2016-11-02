#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 4
void print_maze (int mat[l][c]){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    //int l=5,c=6;
    int i,j;
    int m[l][c];

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }

    print_maze(m);



 return 0;
}
