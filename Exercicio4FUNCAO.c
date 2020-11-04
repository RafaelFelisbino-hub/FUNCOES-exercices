/*Construir um algoritmo que tenha uma função que calcule o cubo de um
número inteiro qualquer de forma que esta possa ser usada para resolver os
seguintes cálculos que serão feitos no algoritmo principal
 O volume de uma esfera: 4/3 R3
 E a equação: x3 + y3 + 2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cubo(float N);

int main() 
{
	float volumeEsfera, equacao, PI, y, N;
	
	printf("Digite o numero para o cubo:  ");
	scanf_s("%f", &N);
	
	printf("Digite o valor de PI:  ");
	scanf_s("%f", &PI);

	volumeEsfera = 4 * PI * cubo(N) / 3;

	printf("O volume da esfera e:  %.2f\n\n", volumeEsfera);

	N = 0;

	printf("Digite o valor de X para a equacao:  ");
	scanf_s("%f", &N);

	printf("Digite o valor de Y para a equacao:  ");
	scanf_s("%f", &y);

	equacao = cubo(N) + cubo(y) + 2;

	printf("O resultado da equacao e: %.2f\n", equacao);
}

float cubo(float N)
{
	float resultado;
	resultado = pow(N,3);
	return(resultado);
}
