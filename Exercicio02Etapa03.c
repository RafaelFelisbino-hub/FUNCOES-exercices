/*A empresa de taxi aéreo Linhas Modernas necessita de um sistema para controle de frota. Serão armazenados: Dados da aeronave: Prefixo, Capacidade, Autonomia.
Dados dos Pilotos: Registro, Nome, Horas de Voo. Dados dos Clientes: CPF, Nome, Destino. 
Dados do Voo: Número do voo, Prefixo aeronave, Registro do Piloto, Destino, CPF Cliente. 
Criar uma função pra validar o CPF. Criar as funções separadas para armazenamento de dados. Atribuir uma funcionalidade para impressão de relatório de voo.*/

#include <stdio.h>
#include <stdlib.h>

int prefixo, capacidade, registroPiloto, numeroDoVoo;
float autonomia, horasDeVoo;
char nomePiloto[20], nomeCliente[20], destino[20];

// VARIAVEIS PARA VALIDAR O CPF

char cpf[12];
int icpf[12];
int i, somador = 0, digito1, result1, result2, digito2, valor;

void dadosDaAeronave();
void dadosDoPiloto();
void dadosDosClientes();
void relatorioDeVoo();
void validadorDeCPF();

int main() 
{
	dadosDaAeronave();
	dadosDoPiloto();
	dadosDosClientes();
	validadorDeCPF();
	relatorioDeVoo();
	system("pause");
}

void dadosDaAeronave()
{
	printf("Digite o prefixo da aeronave:  ");
	scanf_s("%i", &prefixo);

	printf("Digite a capacidade da aeronave:  ");
	scanf_s("%i", &capacidade);

	printf("Digite a autonomia da aeronave em KM:  ");
	scanf_s("%f", &autonomia);
}

void dadosDoPiloto() 
{
	printf("Digite o registro do piloto:  ");
	scanf_s("%i", &registroPiloto);

	getchar();
	printf("Digite o nome do piloto:  ");
	scanf_s("%[^\n]s", &nomePiloto, 20);

	printf("Digite as horas de voo do piloto:  ");
	scanf_s("%f", &horasDeVoo);
}

void dadosDosClientes()
{
	getchar();
	printf("Digite o nome do cliente:  ");
	scanf_s("%[^\n]s", &nomeCliente,20);

	getchar();
	printf("Digite o destino do cliente:  ");
	scanf_s("%[^\n]s", &destino, 20);

	printf("Digite o numero do voo do cliente:  ");
	scanf_s("%i", &numeroDoVoo);
}

void relatorioDeVoo() 
{
	printf("\n\n\n");
	printf("Segue abaixo o relatorio de voo:  ");
	printf("\n");
	printf("O numero de voo e %i. O prefixo da aeronave e %i. O registro do piloto e %i. O destino do cliente e %s e seu CPF e %s", numeroDoVoo, prefixo, registroPiloto, destino, cpf);
}

void validadorDeCPF()
{
	do {
		printf("Digite o cpf do cliente sem pontos e tracos: ");
		scanf_s(" %s", cpf,12);
			
		for (i = 0; i < 11; i++)
			icpf[i] = cpf[i] - 48;
		
		for (i = 0; i < 9; i++)
			somador += icpf[i] * (10 - i);
		
		result1 = somador % 11;

		if ((result1 == 0) || (result1 == 1))
			digito1 = 0;
		
		else
			digito1 = 11 - result1;
		
		somador = 0;

		for (i = 0; i < 10; i++)
			somador += icpf[i] * (11 - i);
		
		valor = (somador / 11) * 11;
		result2 = somador - valor;

		if ((result2 == 0) || (result2 == 1))
			digito2 = 0;
	
		else
			digito2 = 11 - result2;
						
	} while ((digito1 != icpf[9]) && (digito2 != icpf[10]));
}
