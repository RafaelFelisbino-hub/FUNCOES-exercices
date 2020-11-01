/*Escreva um procedimento chamado AUMENTO que receba dois valores
reais X e Y como parâmetros e aumente o valor de X em Y%.*/

#include <stdio.h>
#include <stdlib.h>

void aumento();
float x = 0, y = 0;

int main()
{
	aumento();

	system("pause");
}

void aumento()
{
	float aux;
	
	printf("Digite os valores de X e Y separados por espaco:  ");
	scanf_s("%f %f", &x, &y);

	aux = y * x / 100;

	x =  x + aux;

	printf("X em Y porcento e:  %.0f\n\n", x);
}
