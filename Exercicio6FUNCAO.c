/*Escreva um procedimento chamado POTENCIA que receba duas variáveis
inteiras X e Y e retorne X elevado a Y.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void potencia();

int x = 0, y = 0;

int main()
{
	potencia();
}

void potencia() 
{
	int elevacao;
	
	printf("Digite o valor de X e Y separado por espaco:  ");
	scanf_s("%i %i", &x, &y);

	elevacao = pow(x, y);

	printf("X elevado a Y e:  %i", elevacao);
	return;
}