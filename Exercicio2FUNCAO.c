/*Construir um algoritmo que leia a base e a altura de um triângulo
(utilizando procedimento), e calcule a área deste triângulo (utilizando
função). Mostrar o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

void triangulo(void);
float area(float base, float altura);

float base = 0, altura = 0;

int main()
{
	float resultado;
	
	triangulo();
	
	resultado = area(base,altura);
	printf("A area do triangulo e:  %.2f", resultado);
}

void triangulo(void) 
{
	

	printf("Digite a base do triangulo:  ");
	scanf_s("%f", &base);

	printf("Digite a altura do triangulo:  ");
	scanf_s("%f", &altura);

	return;
}

float area(float base, float altura) 
{
	float res;
	res = (base * altura) / 2;
	return (res);
}