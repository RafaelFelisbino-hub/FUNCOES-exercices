/*Escreva uma função chamada MEDIA que retorne a média de 3 valores reais
(X, Y e Z) passados como parâmetros.*/

#include <stdio.h>
#include <stdlib.h>

float media(float x, float y, float z);
float x = 0, y = 0, z = 0;

int main()
{
	media(x, y, z);

	system("pause");
}

float media(float x, float y, float z) 
{
	float media = 0;

	printf("Digite os valores de X, Y e Z separados por espaco:  ");
	scanf_s("%f %f %f", &x, &y, &z);

	media += (x + y + z) / 3;

	printf("A media dos valores de X, Y, Z e:  %.2f\n\n", media);
	return (media);
}