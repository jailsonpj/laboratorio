#include <stdio.h>
#include <string.h>
#define tam 2


typedef struct regi Regi;
struct regi{
	int mat;
	char nome[100];
	float salario;
	float ferias;
	float sl13;
	int tcasa;
	int trc;
};

Regi funcio[2];