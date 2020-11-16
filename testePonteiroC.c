#include <stdio.h>
#include <stdlib.h>

void ponteiros(int *d, int *e);
int soma(int a, int b);

int main() 
{
	int a, b;
	ponteiros(&a, &b);
	printf("A soma de A e B = %i\n",soma(a,b));
	system("pause");
}

void ponteiros(int *d, int *e) 
{
	printf("Digite o valor de A e B:  ");
	scanf_s("%i %i", d, e);
}

int soma(int a, int b) 
{
	return a + b;
}