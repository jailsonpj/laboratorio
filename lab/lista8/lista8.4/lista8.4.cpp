#include <stdio.h>
#include "lista8.4.h"


int main(int argc, char const *argv[])
{
	
	for (int i = 0; i < 2; ++i)
	{
		
		//__fpurge(stdin);
		setbuf(stdin,NULL);
		printf("Deigite:\n");
		printf("nome do país do time:\n");
		//__fpurge(stdin);	
		setbuf(stdin,NULL);	
		scanf("%s",pais[i].nome);
		for (int j = 0; j < 3; ++j)
		{
			printf("digite o peso do jogador %d:\n",j);
			//__fpurge(stdin);
			setbuf(stdin,NULL);
			
			scanf("%f",&pais[i].jogador[j].peso);
			
			setbuf(stdin,NULL);
			printf("idade do jogador %d:\n",j);
			//__fpurge(stdin);
			setbuf(stdin,NULL);
			
			scanf("%d",&pais[i].jogador[j].idade);
			setbuf(stdin,NULL);
			
			
		}
	}
	media_time(pais);

	return 0;
}
