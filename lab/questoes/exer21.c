/*
 * =====================================================================================
 *
 *       Filename:  exer21.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12-09-2016 20:56:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*void clube (int n)
{
	int contg,conti,cont;

	if(n == 1){
		contg++;
			

	}
	if(n == 2){
		conti++;
	}
	if(n == 3){
		cont++;
	}
}
void sala (int n, float sal)
{
	float g,in,out,acum1=0,acum2=0,acum3=0;

	if(n == 1){
		
		 acum1=acum1+sal;			

	}
	if(n == 2){
		
		 acum2=acum2+sal;
		
	}
	if(n == 3){
		 acum3=acum3+sal;
		
	}
}

void ori (int n,int o)
{

	int or1=0;,ori2=0;
	if(n == 0){
		
		 ori=ori+1;					

	}
	if(n == 1){
		 ori =ori+1;
	}
		
}
*/


int main (int argc,const char *argv[])
{

	int i,clu,o1=0,o2=0,o3=0;
	float sg,si,so,asal=0,asal2=0,asal3=0;
	int aclu = 0,aclu1 = 0,aclu2 = 0;
	for(i=1;i<=3;i++){
		printf("qual seu clube?\n");
		printf("digite: 1- Grêmio,2- Internacional e 3- Outros\n");
		scanf("%d",&clu);
		if(clu == 1){
			//clube(clu);
			printf("informe salario\n");
			scanf("%f",&sg);
			//sala(clu,sg);
			printf("sua origem: 0- Porto Alefre , 1- outros\n");
			scanf("%d",&o1);		
			//ori(clu,o);
			aclu = aclu +1;
			asal = asal + sg;
			o1 = o1 + 1;
		}
		if(clu == 2){
			//clube(clu);
			printf("informe salario\n");
			scanf("%f",&si);
			//sala(clu,si);
			printf("sua origem: 0- Porto Alefre , 1- outros\n");
			scanf("%d",&o2);		
			//ori(clu,o);
			aclu1 = aclu1 +1;
			asal2 = asal2 + sg;
			o2 = o2 + 1;
		}
		if(clu == 3){
			//clube(clu);
			printf("informe salario\n");
			scanf("%f",&so);
			//sala(clu,so);
			printf("sua origem: 0- Porto Alefre , 1- outros\n");
			scanf("%d",&o3);		
			//ori(clu,o);
			aclu2 = aclu2 +1;
			asal3 = asal3 + sg;
			o3 = o3 + 1;
		}

	}
	printf("numero de torcedores por clube:\n");
	printf("gremio : %d , internacional: %d , outros: %d\n",aclu,aclu1,aclu2);
	printf("media dos salario dos torcedores do gremio é %0.2f\n",asal/aclu);
	printf("nascidos em PA que torcem para outros times é %d\n",o3);
	return 0;
}
