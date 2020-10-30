/*Escreva um procedimento chamado TROCA que receba 2 variáveis inteiras
(X e Y) e troque o conteúdo entre elas;*/

#include <stdio.h>
#include <stdlib.h>

void troca();

int x = 0, y = 0;

int main() 
{
	troca();
}

void troca() 
{
	int aux;
	
	printf("Digite o valor de X e Y separado por espaco:  ");
	scanf_s("%i %i", &x, &y);

	aux = x;
	x = y;
	y = aux;

	printf("Os valores trocados sao:  %i, %i", x, y);
}