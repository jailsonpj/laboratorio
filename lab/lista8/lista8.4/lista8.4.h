#include <stdio.h>
#include <stdlib.h>
#define tam 2
#define cont 3

typedef struct dados Dados;
struct dados{
	float peso;
	int idade;
};

typedef struct time Time;
struct time
{
	char nome[40];
	Dados jogador[cont];
};

Time pais[tam];

void media_time(Time *aux)
{
	float midade,mpeso;

	for (int i = 0; i < tam; ++i)
	{
		mpeso = 0;
		midade = 0;
		for (int j = 0; j < cont; ++j)
		{
			mpeso = mpeso + aux[i].jogador[j].peso;
			midade=midade+aux[i].jogador[j].idade;
		}

		printf("A média de idade do time %s\t",aux[i].nome );
		printf("é:%0.2f\n",midade/cont);
		printf("A média do peso do time %s\t",aux[i].nome );
		printf("é:%0.2f\n",mpeso/cont);	

	}
}

void media_parti(Time *aux)
{
	float midade=0,mpeso=0;

	for (int i = 0; i < tam; ++i)
	{
		
		for (int j = 0; j < cont; ++j)
		{
			mpeso = mpeso + aux[i].jogador[j].peso;
			midade=midade+aux[i].jogador[j].idade;
		}

	}
	printf("A média das idades dos participantes:%0.2f\n",midade/tam);
	printf("A média dos pesos dos participantes:%0.2f\n",mpeso/tam);

}