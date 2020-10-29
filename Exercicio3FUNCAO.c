/*Construir um algoritmo que leia um valor inteiro N (utilizando
procedimento) e calcule o cubo deste valor (utilizando função). Mostre o
resultado.*/

#include <stdio.h>
#include <stdlib.h>

void leituraN(void);
int cubo(int N);

int N;

int main() 
{
	int resultado;
	
	leituraN();
	resultado = cubo(N);

	printf("O cubo de N e %i", resultado);
}

void leituraN(void) 
{
	printf("Digite o valor para achar o cubo:  ");
	scanf_s("%i", &N);
	return;
}

int cubo(int N) 
{
	int resultado;
	resultado = N * N * N;
	return(resultado);
}