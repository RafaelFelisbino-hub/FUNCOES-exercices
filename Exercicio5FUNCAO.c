/*Construir um algoritmo para cada caso, utilizando funções e reduzindo ao
máximo o uso de variáveis globais:
Solicitar ao usuário um número e exibir o seu cubo. Função deve receber o
número e retornar o cubo correspondente.
Solicitar ao usuário a idade (em anos ) e exibir o número de dias vividos até
o último aniversário. Função deve receber a idade e retornar o número de
dias vividos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float cubo(float N);
int diasVividos(int idade);

float N = 0;
int idade = 0, , dia = 0, mes = 0, ano = 0;

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
	int anos, meses = 0, ano1 = 0;

	printf("Digite sua idade em anos:  ");
	scanf_s("%i", &idade);

	printf("Digite sua data de nascimento separado por barra 00/00/0000:  ");
	scanf_s("%f/%f/%f", &dia, &mes, &ano);
	
	ano1 = idade * 365;
	meses = mes * 30;
	
	anos = dia + meses + ano1;
	return(anos);
}
