/*Escreva um procedimento que, ap�s a leitura dos dados, realizada por um
procedimento com o objetivo de ler os valores para uma string S e valor
para um n�mero inteiro positivo N, exiba a string S por N vezes seguidas na
tela. Crie tamb�m o algoritmo principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringS(void);

int main()
{
	stringS();
	return 0;
}

void stringS(void)
{
	char string[50];
	int N = 0, i = 0;
	
	printf("Digite os valores para string:  ");
	scanf_s("%s",&string,50);
	
	printf("Digite um numero inteiro:  ");
	scanf_s("%i", &N);

	for (i = 0; i < N; i++)
	{
		printf("%s\n", string);
	}

	return;
}
