# Lista 01
## Jefferson Avilar

---
>1 - Escreva um algoritmo que leia dois números e mostre o produto desses números.

```c
#include <stdio.h>

int main()
{

  int number1,
      number2;

  printf("Insira o primeiro valor: ");
  scanf("%d", &number1);
  printf("Insira o segundo valor: ");
  scanf("%d", &number2);

  printf("O produto entre os dois valores é = %d\n", (number1*number2));

  return (0);
}
```
---
>2 - Leia um número e exiba seu antecessor.

```c
/*
  1.Escreva um algoritmo que leia dois números e mostre o produto desses números.
*/

#include <stdio.h>

int main()
{

  int number;

  printf("Insira valor: ");
  scanf("%d", &number);

  printf("O valor antecessor ao digitado é = %d\n", (number-1));

  return (0);
}
```
---
>3 - Faça um algoritmo que leia o nome e as idades de duas pessoas e mostre a soma das idades.

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {


  int id1, id2;

  scanf("%d %d", &id1, &id2);
  printf("Soma das idades = %d\n",id1+id2);

  return 0;
}
```
---
> 4 - Escreva um algoritmo que leia dois números e efetue as quatro operações básicas (soma, subtração, multiplicação e divisão) com esses dois números.

```c
#include <stdio.h>

int main()
{
  float n2,
      n1;

  float soma,
        subitracao,
        divisao,
        multiplicacao;


  printf("Insira o primeiro valor: ");
  scanf("%f", &n1);
  printf("Insira o segundo valor: ");
  scanf("%f", &n2);

  soma = n1+n2;
  subitracao = n1-n2;
  divisao = n1/n2;
  multiplicacao = n1*n2;

  printf("O soma dos dois valores é = %.1f\n", (soma));
  printf("A subtração dos dois valores é = %.1f\n", (subitracao));
  printf("A divisão dos dois valores é = %.1f\n", (divisao));
  printf("A multiplicação dos dois valores é = %.1f\n", (multiplicacao));

  return (0);
}
```
---
> 6 - Escreva um algoritmo que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. O algoritmo deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo destas variáveis.

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int v[2], aux;

  for (int i = 0; i < 2; i++)
  {
    scanf("%d", &v[i]);
  }

    aux = v[0];
    v[0] = v[0+1];
    v[0+1] = aux;

  for (int i = 0; i < 2; i++)
  {
    printf("%d ", v[i]);
  }

  printf("\n");

  return 0;
}
```
---
> 7 - Faça um algoritmo que leia valores para as variáveis A, B e C e mostre o resultado da seguinte expressão: (A – C) * B

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a, b, c;

  scanf("%d %d %d",&a, &b, &c);

  printf("%d\n", (a-c)*b);
  return 0;
}
```
---
> 8 - Faça um algoritmo que leia três notas e imprima a média dessas notas.

```c
#include <stdio.h>
int main(int argc, char const *argv[]) {

  float a, b, c;

  scanf("%f %f %f", &a, &b, &c);
  printf("Média = %.2f\n", (a+b+c)/3);
  return 0;
}
```
---
> 9 - Escreva um programa que leia um número inteiro que represente a idade de uma pessoa (em anos). Calcule numa variável real quantos minutos esta pessoa já viveu e apresente na tela.

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int id, anos_min = 525600;
  double viveu = anos_min * id;

  scanf("%d", &id);

  printf("Você viveu %.f minutos\n", viveu);

  return 0;
}
```
>   10 - Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é: sqrt((x2-x1)²+(y2-y1)²)

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x1,x2,y1,y2;

  scanf("%d %d", &x1,&y1);
  scanf("%d %d", &x2,&y2);

  printf("A distância entre os pontos é = %d\n", (((x2-x1)^2 + (y2-y1)^2)*0.5));

  return 0;
}
```
---
> 17 - Escreva um algoritmo para ler um uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na fórmula abaixo):
C = 5(F-32)/9

```c
#include <stdio.h>

int main(int argc, char const *argv[]) {

  float farh;

  scanf("%f", &farh);

  printf("Temperatura em celsius = %.2f\n", (farh-32)/1.8);
  return 0;
}
```
