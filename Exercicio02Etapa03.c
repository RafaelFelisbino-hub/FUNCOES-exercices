/*A empresa de taxi aéreo Linhas Modernas necessita de um sistema para controle de frota. Serão armazenados: Dados da aeronave: Prefixo, Capacidade, Autonomia.
Dados dos Pilotos: Registro, Nome, Horas de Voo. Dados dos Clientes: CPF, Nome, Destino. 
Dados do Voo: Número do voo, Prefixo aeronave, Registro do Piloto, Destino, CPF Cliente. 
Criar uma função pra validar o CPF. Criar as funções separadas para armazenamento de dados. Atribuir uma funcionalidade para impressão de relatório de voo.*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

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
void gotoxy(int x, int y);


int main() 
{
	dadosDaAeronave();
	dadosDoPiloto();
	dadosDosClientes();
	validadorDeCPF();
    system("cls");
	relatorioDeVoo();
    printf("\n\n\n\n\n\n\n\n\n\n\n");
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
    //RELATORIO DE VOO
    gotoxy(29, 0); printf("%c", 218);
    for (i = 30; i <= 60; i++)
    {
        gotoxy(i, 0); printf("%c", 196);
    }
    gotoxy(61, 0); printf("%c", 191);
    gotoxy(29, 1); printf("%c", 179);
    gotoxy(61, 1); printf("%c", 179);
    gotoxy(29, 2); printf("%c", 192);
    gotoxy(61, 2); printf("%c", 217);
    for (i = 30; i <= 60; i++)
    {
        gotoxy(i, 2); printf("%c", 196);
    }

    //NUMERO DE VOO
    gotoxy(0, 4); printf("%c", 218);
    for (i = 1; i <= 28; i++)
    {
        gotoxy(i, 4); printf("%c", 196);
    }
    gotoxy(28, 4); printf("%c", 191);
    gotoxy(28, 5); printf("%c", 179);
    gotoxy(0, 5); printf("%c", 179);
    gotoxy(0, 6); printf("%c", 192);
    gotoxy(28, 6); printf("%c", 217);
    for (i = 1; i <= 27; i++)
    {
        gotoxy(i, 6); printf("%c", 196);
    }

    //PREFIXO DA AERONAVE
    gotoxy(29, 4); printf("%c", 218);
    for (i = 30; i <= 57; i++)
    {
        gotoxy(i, 4); printf("%c", 196);
    }
    gotoxy(58, 4); printf("%c", 191);
    gotoxy(29, 5); printf("%c", 179);
    gotoxy(58, 5); printf("%c", 179);
    gotoxy(29, 6); printf("%c", 192);
    gotoxy(58, 6); printf("%c", 217);
    for (i = 30; i <= 57; i++)
    {
        gotoxy(i, 6); printf("%c", 196);
    }

    //REGISTRO DO PILOTO
    gotoxy(59, 4); printf("%c", 218);
    for (i = 60; i <= 90; i++)
    {
        gotoxy(i, 4); printf("%c", 196);
    }
    gotoxy(120, 4); printf("%c", 191);
    gotoxy(91, 5); printf("%c", 179);
    gotoxy(59, 5); printf("%c", 179);
    gotoxy(59, 6); printf("%c", 192);
    gotoxy(91, 6); printf("%c", 217);
    for (i = 60; i <= 90; i++)
    {
        gotoxy(i, 6); printf("%c", 196);
    }

    //DESTINO
    gotoxy(0, 7); printf("%c", 218);
    for (i = 1; i <= 28; i++)
    {
        gotoxy(i, 7); printf("%c", 196);
    }
    gotoxy(28, 7); printf("%c", 191);
    gotoxy(28, 8); printf("%c", 179);
    gotoxy(0, 8); printf("%c", 179);
    gotoxy(0, 9); printf("%c", 192);
    gotoxy(28, 9); printf("%c", 217);
    for (i = 1; i <= 27; i++)
    {
        gotoxy(i, 9); printf("%c", 196);
    }

   //CPF CLIENTE
    gotoxy(29, 7); printf("%c", 218);
    for (i = 30; i <= 60; i++)
    {
        gotoxy(i, 7); printf("%c", 196);
    }
    gotoxy(61, 7); printf("%c", 191);
    gotoxy(29, 8); printf("%c", 179);
    gotoxy(61, 8); printf("%c", 179);
    gotoxy(29, 9); printf("%c", 192);
    gotoxy(61, 9); printf("%c", 217);
    for (i = 30; i <= 60; i++)
    {
        gotoxy(i, 9); printf("%c", 196);
    }
    
    gotoxy(38, 1); printf("RELATORIO DE VOO");
    gotoxy(2, 5); printf("Numero do voo: %i", numeroDoVoo);
    gotoxy(31, 5); printf("Prefixo Aeronave: %i", prefixo);
    gotoxy(61, 5); printf("Registro Piloto: %i", registroPiloto);
    gotoxy(2, 8); printf("Destino: %s", destino);
    gotoxy(31, 8); printf("CPF do Cliente: %s", cpf); 
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

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
