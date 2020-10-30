/*Construir um algoritmo para cada caso, utilizando fun��es e reduzindo ao
m�ximo o uso de vari�veis globais:
Solicitar ao usu�rio um n�mero e exibir o seu cubo. Fun��o deve receber o
n�mero e retornar o cubo correspondente.
Solicitar ao usu�rio a idade (em anos ) e exibir o n�mero de dias vividos at�
o �ltimo anivers�rio. Fun��o deve receber a idade e retornar o n�mero de
dias vividos.*/

#include <stdio.h>
#include <stdlib.h>

float cubo(float N);
int diasVividos(int idade);


float N = 0;
int idade = 0;

int main() 
{
	float res1;
	int res2;
	
	res1 = cubo(N);
	printf("O cubo e:  %.2f\n\n",res1);
	
	res2 = diasVividos(idade);
	printf("A quantidade de dias vividos e:  %i", res2);
}

float cubo(float N)
{
	float resultado;
	
	printf("Digite o numero para saber seu cubo:  ");
	scanf_s("%f", &N);
	
	resultado = N * N * N;
	return(resultado);
}

int diasVividos(int idade)
{
	int anos;

	printf("Digite sua idade em anos:  ");
	scanf_s("%i", &idade);

	anos = idade * 365;
	return(anos);
}

