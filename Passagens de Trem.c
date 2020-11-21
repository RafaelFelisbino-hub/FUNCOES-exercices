/* Algoritmo para sistema que fará a gestão de assentos disponíveis em um trem de passageiros.
O trem possui 10 vagões e cada vagão possui 45 assentos disponíveis.
Existem duas classes de passagem, a executiva do vagão 1 ao 5 e a econômica do vagão 6 ao 10.
Você deverá criar um programa que solicite o nome do comprador da passagem e quantas passagens ele irá comprar de uma determinada classe.
Após ele comprar, verificar se possui assentos disponíveis, se sim, ele poderá concretizar a compra e
mostrar na tela quais são os assentos liberados para ele, se não, emitir um aviso que o trem está cheio.
Para liberar os assentos, você deverá iniciar a venda de passagens pelo vagão 1 assento 1, após o vagão 1 estar preenchido, você deve começar a
vender os assentos do vagão 2, e assim sucessivamente. Mas se a passagem for da classe econômica, você deverá iniciar do vagão 6. O comprador não
pode escolher o assento que ele deseja.

Criar um menu de opções onde poderá comprar a passagem, visualizar a quantidade total de passagens vendidas por classe,
visualizar a quantidade de assentos disponíveis por vagão.

Criar uma interface amigável, utilize todos os recursos aprendidos até hoje nas aulas.*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char passageiros[200];
int op, i, passagem1[45];
int vagao1 = 45, vagao2 = 45, vagao3 = 45, vagao4 = 45, op1 = 0, op2 = 0, op3 = 0, pass1 = 0, pass2 = 0, pass3 = 0, pass4 = 0, op4 = 0;
int vagao5 = 45, pass5 = 0, vagao6 = 45, pass6 = 0, vagao7 = 45, pass7 = 0;
int vagao8 = 45, pass8 = 0, vagao9 = 45, pass9 = 0, vagao10 = 45, pass10 = 0;
int pVendidas = 0;
int recebePass1 = 0, recebePass2 = 0, recebePass3 = 0, recebePass4 = 0, recebePass5 = 0, recebePass6 = 0, recebePass7 = 0, recebePass8 = 0, recebePass9 = 0, recebePass10 = 0;
int vagao11 = 45, vagao12 = 45, vagao13 = 45, vagao14 = 45, vagao15 = 45, vagao16 = 45, vagao17 = 45, vagao18 = 45, vagao19 = 45, vagao20 = 45;
int trocoEconomica = 0, trocoExecutiva = 0, saque, resposta, troco, classeEconomica = 0, classeExecutiva = 0, passagem = 0, passagem2 = 0;
float  classeEconomicaCartao = 0, classeExecutivaCartao = 0, receberDinheiro, trocoCliente = 0, trocoCliente2,cE = 0, cE2 = 0;

void cadastroTrem();
void assentosDisponiveis();
void passagensVendidas();
void tabelaAssentosDisponiveis();
void tabelaPassagensVendidas();
void assentos(int linha);
void tabelaComprar();
void tabelaMenu();
void cabecalho();
void cor(int cor_letra);
void gotoxy(int x, int y);
void LayoutTremzim();
void sistemaTroco();

int main() {
	int sw;

	do {
		tabelaMenu();
		gotoxy(4, 5); cor(192); printf(" N%cMEROS ", 233);
		gotoxy(4, 28); printf(" OP%c%cES ", 128, 229);
		gotoxy(5, 9); cor(15); printf("1"); cor(12); printf(" ................. "); cor(15); printf("Comprar passagem");
		gotoxy(6, 9); printf("2"); cor(12); printf(" ................. "); cor(15); printf("Consultar passagens vendidas");
		gotoxy(7, 9); printf("3"); cor(12); printf(" ................. "); cor(15); printf("Consultar assentos dispon%cveis", 161);
		gotoxy(8, 9); printf("4"); cor(12); printf(" ................. "); cor(15); printf("Sair");
		gotoxy(10, 10); printf("Escolha um n%cmero de acordo com a op%c%co: ", 163, 135, 198);
		cor(192); scanf_s("%i", &sw); cor(15);

		system("cls");

		switch (sw) {
		case 1:
			cadastroTrem();
			system("cls");
			break;
		case 2:
			passagensVendidas();
			system("cls");
			break;
		case 3:
			assentosDisponiveis();
			system("cls");
			break;
		}
	} while (sw != 4);

	printf("\n\n");
}

void assentosDisponiveis() {

	if (vagao11 < 0)
		vagao11 = 0;
	if (vagao12 < 0)
		vagao12 = 0;
	if (vagao13 < 0)
		vagao13 = 0;
	if (vagao14 < 0)
		vagao14 = 0;
	if (vagao15 < 0)
		vagao15 = 0;
	if (vagao16 < 0)
		vagao16 = 0;
	if (vagao17 < 0)
		vagao17 = 0;
	if (vagao18 < 0)
		vagao18 = 0;
	if (vagao19 < 0)
		vagao19 = 0;
	if (vagao20 < 0)
		vagao20 = 0;


	tabelaAssentosDisponiveis();

	cor(192);
	gotoxy(4, 12); printf(" VAG%cO ", 199);
	gotoxy(4, 34); printf(" ASSENTOS DISPON%cVEIS ", 214);

	cor(15);
	gotoxy(6, 6); printf("Executiva (vag%co 1)", 198); gotoxy(6, 43); printf("%i", vagao11);
	gotoxy(8, 6); printf("Executiva (vag%co 2)", 198); gotoxy(8, 43); printf("%i", vagao12);
	gotoxy(10, 6); printf("Executiva (vag%co 3)", 198); gotoxy(10, 43); printf("%i", vagao13);
	gotoxy(12, 6); printf("Executiva (vag%co 4)", 198); gotoxy(12, 43); printf("%i", vagao14);
	gotoxy(14, 6); printf("Executiva (vag%co 5)", 198); gotoxy(14, 43); printf("%i", vagao15);

	gotoxy(16, 6); printf("Econ%cmica (vag%co 6)", 147, 198); gotoxy(16, 43); printf("%i", vagao16);
	gotoxy(18, 6); printf("Econ%cmica (vag%co 7)", 147, 198); gotoxy(18, 43); printf("%i", vagao17);
	gotoxy(20, 6); printf("Econ%cmica (vag%co 8)", 147, 198); gotoxy(20, 43); printf("%i", vagao18);
	gotoxy(22, 6); printf("Econ%cmica (vag%co 9)", 147, 198); gotoxy(22, 43); printf("%i", vagao19);
	gotoxy(24, 6); printf("Econ%cmica (vag%co 10)", 147, 198); gotoxy(24, 43); printf("%i", vagao20);

	printf("\n\n\n");
	system("pause");
}

void passagensVendidas() {
	tabelaPassagensVendidas();

	cor(192);
	gotoxy(4, 17); printf(" TOTAL DE PASSAGENS VENDIDAS ");
	gotoxy(6, 8); printf(" CLASSE EXECUTIVA ");
	gotoxy(6, 37); printf(" CLASSE ECON%cMICA ", 226);

	cor(15);
	gotoxy(5, 30); printf("%i", pass1 + pass2 + pass3 + pass4 + pass5 + pass6 + pass7 + pass8 + pass9 + pass10);
	gotoxy(7, 15); printf("%i", pass1 + pass2 + pass3 + pass4 + pass5);
	gotoxy(7, 44); printf("%i", pass6 + pass7 + pass8 + pass9 + pass10);

	printf("\n\n\n");
	gotoxy(12, 9); system("pause");
}

void cadastroTrem() {

	tabelaComprar();

	cor(192);
	gotoxy(5, 3); printf(" Nome ");
	gotoxy(7, 3); printf(" Quantas passagens deseja comprar? ");

	gotoxy(9, 4); printf(" Classe Executiva "); cor(15); printf(" 1 a 5 "); cor(192);
	gotoxy(9, 33); printf(" Classe Econ%cmica ", 147); cor(15); printf(" 6 a 10 ");
	gotoxy(10, 10); cor(12); printf("Escolha a classe a partir dos n%cmeros: ", 163);
	gotoxy(12, 2); cor(192); printf("Econ%cmica(3) = R$ 35,00 . Executiva(4) R$ 58,00:", 147);

	gotoxy(14, 2); cor(192); printf("Dinheiro (1) . Cart%co (2):", 198);

	cor(15); gotoxy(12, 51); scanf_s("%i", &resposta);
	cor(15); gotoxy(14, 29); scanf_s("%i", &troco);
	gotoxy(5, 10); cor(15); scanf_s(" %[^\n]s", &passageiros, 200); getchar();
	gotoxy(7, 39); scanf_s(" %i", &passagem1);
	gotoxy(10, 49); scanf_s(" %i", &op);

	passagem = passagem1[0];
	passagem2 = passagem1[0];

	if (resposta == 3)
	{
		passagem *= 35;
		cor(192);  gotoxy(14, 38); printf("Total = %i reais", passagem);
	}
	if (resposta == 4)
	{
		passagem2 *= 58;
		cor(192); gotoxy(14, 38); printf("Total = %i reais", passagem2);
	}

	if (troco != 2)
	{
		cor(192); gotoxy(16, 2); printf("Valor a pagar:");
		cor(15); gotoxy(16, 17); scanf_s("%f", &receberDinheiro);
	}

	op3 = 0;
	op2 = 0;
	op2 += passagem1[0];
	op3 += passagem1[0];

	gotoxy(20, 1); printf("\t\t      "); cor(192); printf(" Seus assentos \n"); cor(15);

	if (op == 1) {
		printf("\n\t\t"); cor(12); printf("Vag%co 1 da Classe Executiva:", 198);

		for (i = 0; i < op3; i++) {
			if (pass1 == 45 || pass1 > 45)
				break;
			vagao11 = vagao1 - passagem1[0];
			pass1++;
			cor(15); printf("\n\t\t\tAssento %i", pass1);

		}
		op4 += op2;
		if (op4 > 45) {

			printf("\n\n\t\t"); cor(12); printf("Vag%co 2 da Classe Executiva:", 198);
			for (i = pass1; i < op4; i++) {
				if (pass2 == 45 || pass2 > 45)
					break;
				pass2++;
				vagao12 = vagao2 - pass2;
				cor(15); printf("\n\t\t\tAssento %i", pass2);
			}
		}
		vagao1 -= passagem1[0];
	}

	if (op == 2) {
		printf("\n\t\t"); cor(12); printf("Vag%co 2 da Classe Executiva:", 198);

		for (i = 0; i < op2; i++) {
			if (pass2 == 45 || pass2 > 45)
				break;
			pass2++;
			vagao12 = vagao2 - pass2;
			cor(15); printf("\n\t\t\tAssento %i", pass2);
		}

		if (op3 > 45 || pass2 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 3 da Classe Executiva:", 198); 
			for (i = pass2; i < op2; i++) {
				if (pass3 == 45 || pass3 > 45)
					break;
				pass3++;
				vagao13 = vagao2 - pass3;
				cor(15); printf("\n\t\t\tAssento %i", pass3);
			}
		}
		vagao2 -= passagem1[0];
	}

	if (op == 3) {
		printf("\n\t\t"); cor(12); printf("Vag%co 3 da Classe Executiva:", 198);

		for (i = 0; i < op3; i++) {
			if (pass3 == 45 || pass3 > 45)
				break;
			pass3++;
			vagao13 = vagao3 - pass3;
			cor(15); printf("\n\t\t\tAssento %i", pass3);
		}

		if (op3 > 45 || pass3 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 4 da Classe Executiva:", 198);
			for (i = pass3; i < op3; i++) {
				if (pass4 == 45 || pass4 > 45)
					break;
				pass4++;
				vagao14 = vagao2 - pass4;
				cor(15); printf("\n\t\t\tAssento %i", pass4);
			}
		}
		vagao3 -= passagem1[0];
	}

	if (op == 4) {
		printf("\n\t\t"); cor(12); printf("Vag%co 4 da Classe Executiva:", 198);

		for (i = 0; i < op3; i++) {
			if (pass4 == 45 || pass4 > 45)
				break;
			pass4++;
			vagao14 = vagao4 - pass4;
			cor(15); printf("\n\t\t\tAssento %i", pass4);
		}

		if (op3 > 45 || pass4 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 5 da Classe Executiva:", 198);
			for (i = pass4; i < op3; i++) {
				if (pass5 == 45 || pass5 > 45)
					break;
				pass5++;
				vagao15 = vagao2 - pass5;
				cor(15); printf("\n\t\t\tAssento %i", pass5);
			}
		}
		vagao4 -= passagem1[0];
	}

	if (op == 5) {
		printf("\n\t\t"); cor(12); printf("Vag%co 5 da Classe Executiva:", 198);

		for (i = 0; i < op3; i++) {
			if (pass5 == 45 || pass5 > 45)
				break;
			pass5++;
			vagao15 = vagao5 - pass5;
			cor(15); printf("\n\t\t\tAssento %i", pass5);
		}

		if (op3 > 45 || pass5 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 1 da Classe Econ%cmica:", 198, 147);
			for (i = pass5; i < op3; i++) {
				if (pass6 == 45 || pass6 > 45)
					break;
				pass6++;
				vagao16 = vagao2 - pass6;
				cor(15); printf("\n\t\t\tAssento %i", pass6);
			}
		}
		vagao5 -= passagem1[0];
	}

	if (op == 6) {
		printf("\n\t\t"); cor(12); printf("Vag%co 1 da Classe Econ%cmica:", 198, 147);

		for (i = 0; i < op3; i++) {
			if (pass6 == 45 || pass6 > 45)
				break;
			pass6++;
			vagao16 = vagao6 - pass6;
			cor(15); printf("\n\t\t\tAssento %i", pass6);
		}

		if (op3 > 45 || pass6 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 2 da Classe Econ%cmica:", 198, 147);
			for (i = pass6; i < op3; i++) {
				if (pass7 == 45 || pass7 > 45)
					break;
				pass7++;
				vagao17 = vagao2 - pass7;
				cor(15); printf("\n\t\t\tAssento %i", pass7);
			}
		}
		vagao6 -= passagem1[0];
	}

	if (op == 7) {
		printf("\n\t\t"); cor(12); printf("Vag%co 2 da Classe Econ%cmica:", 198, 147);

		for (i = 0; i < op3; i++) {
			if (pass7 == 45 || pass7 > 45)
				break;
			pass7++;
			vagao17 = vagao7 - pass7;
			cor(15); printf("\n\t\t\tAssento %i", pass7);
		}

		if (op3 > 45 || pass7 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 3 da Classe Econ%cmica:", 198, 147);
			for (i = pass7; i < op3; i++) {
				if (pass8 == 45 || pass8 > 45)
					break;
				pass8++;
				vagao18 = vagao2 - pass8;
				cor(15); printf("\n\t\t\tAssento %i", pass8);
			}
		}
		vagao7 -= passagem1[0];
	}

	if (op == 8) {
		printf("\n\t\t"); cor(12); printf("Vag%co 3 da Classe Econ%cmica:", 198, 147);

		for (i = 0; i < op3; i++) {
			if (pass8 == 45 || pass8 > 45)
				break;
			pass8++;
			vagao18 = vagao8 - pass8;
			cor(15); printf("\n\t\t\tAssento %i", pass8);
		}

		if (op3 > 45 || pass8 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 4 da Classe Econ%cmica:", 198, 147);
			for (i = pass8; i < op3; i++) {
				if (pass9 == 45 || pass9 > 45)
					break;
				pass9++;
				vagao19 = vagao2 - pass9;
				cor(15); printf("\n\t\t\tAssento %i", pass9);
			}
		}
		vagao8 -= passagem1[0];
	}

	if (op == 9) {
		printf("\n\t\t"); cor(12); printf("Vag%co 4 da Classe Econ%cmica:", 198, 147);

		for (i = 0; i < op3; i++) {
			if (pass9 == 45 || pass9 > 45)
				break;
			pass9++;
			vagao19 = vagao9 - pass9;
			cor(15); printf("\n\t\t\tAssento %i", pass9);
		}

		if (op3 > 45 || pass9 > 45) {
			printf("\n\n\t\t"); cor(12); printf("Vag%co 5 da Classe Econ%cmica:", 198, 147);
			for (i = pass9; i < op3; i++) {
				if (pass10 == 45 || pass10 > 45)
					break;
				pass10++;
				vagao20 = vagao10 - pass10;
				cor(15); printf("\n\t\t\tAssento %i", pass10);
			}
		}
		vagao9 -= passagem1[0];
	}

	if (op == 10) {
		printf("\n\t\t"); cor(12); printf("Vag%co 5 da Classe Econ%cmica:", 198, 147);

		for (i = 0; i < op3; i++) {
			if (pass10 == 45 || pass10 > 45)
				break;
			pass10++;
			vagao20 = vagao10 - pass10;
			cor(15); printf("\n\t\t\tAssento %i", pass10);
		}
		vagao10 -= passagem1[0];
	}

	printf("\n\n\n");
	sistemaTroco();
	cor(15); gotoxy(18, 9); system("pause");
	system("cls");
}

void cabecalho() {
	cor(12);
	int j = 0;

	gotoxy(1, 1); printf("%c", 201);	// Canto superior esquerdo do cabeçalho
	for (j = 0; j < 58; j++) {
		printf("%c", 205);				// Traço horizontal do cabeçalho
	}
	printf("%c", 187);					// Canto superior direito do cabeçalho

	printf("\n%c", 186);				// Traço vertical esquerdo do cabeçalho
	gotoxy(2, 22); printf("EMPRESA TREM GRAND%c ", 210);	// CABEÇALHO
	gotoxy(2, 60); printf("%c", 186);	// Traço vertical direito do cabeçalho

	printf("\n%c", 200);				// Canto inferior esquerdo do cabeçalho
	for (j = 0; j < 58; j++) {
		printf("%c", 205);				// Traço horizontal do cabeçalho
	}
	gotoxy(3, 60); printf("%c", 188);	// Canto inferior direito do cabeçalho
}

void tabelaAssentosDisponiveis() {
	cabecalho();
	int j = 0;

	gotoxy(5, 1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados

	gotoxy(5, 29); printf("%c", 194);	// T para baixo

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 5)
	gotoxy(6, 60); printf("%c", 179);

	gotoxy(6, 29); printf("%c", 179);

	gotoxy(7, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(7, 29); printf("%c", 197);	// +
	gotoxy(7, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	gotoxy(8, 1); printf("%c", 179);
	gotoxy(8, 29); printf("%c", 179);
	gotoxy(8, 60); printf("%c", 179);

	gotoxy(9, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(9, 29); printf("%c", 197);	// +
	gotoxy(9, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 9)
	gotoxy(10, 29); printf("%c", 179);
	gotoxy(10, 60); printf("%c", 179);

	gotoxy(11, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(11, 29); printf("%c", 197);	// +
	gotoxy(11, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 11)
	gotoxy(12, 29); printf("%c", 179);
	gotoxy(12, 60); printf("%c", 179);

	gotoxy(13, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(13, 29); printf("%c", 197);	// +
	gotoxy(13, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 13)
	gotoxy(14, 29); printf("%c", 179);
	gotoxy(14, 60); printf("%c", 179);

	gotoxy(15, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(15, 29); printf("%c", 197);	// +
	gotoxy(15, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 15)
	gotoxy(16, 29); printf("%c", 179);
	gotoxy(16, 60); printf("%c", 179);

	gotoxy(17, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(17, 29); printf("%c", 197);	// +
	gotoxy(17, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 17)
	gotoxy(18, 29); printf("%c", 179);
	gotoxy(18, 60); printf("%c", 179);

	gotoxy(19, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(19, 29); printf("%c", 197);	// +
	gotoxy(19, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 19)
	gotoxy(20, 29); printf("%c", 179);
	gotoxy(20, 60); printf("%c", 179);

	gotoxy(21, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(21, 29); printf("%c", 197);	// +
	gotoxy(21, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 21)
	gotoxy(22, 29); printf("%c", 179);
	gotoxy(22, 60); printf("%c", 179);

	gotoxy(23, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(23, 29); printf("%c", 197);	// +
	gotoxy(23, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 23)
	gotoxy(24, 29); printf("%c", 179);
	gotoxy(24, 60); printf("%c", 179);

	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 217); 					// Canto inferior direito da tabela de dados

	gotoxy(25, 29); printf("%c", 193);	// T para cima
}

void tabelaComprar() {
	cabecalho();
	int j = 0, i = 0;

	gotoxy(4, 1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 5)
	gotoxy(5, 60); printf("%c", 179);

	gotoxy(6, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (i = 0; i < 58; i++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 180);					// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 7)
	gotoxy(7, 60); printf("%c", 179);

	gotoxy(8, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (i = 0; i < 58; i++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 180);					// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 9)
	gotoxy(9, 60); printf("%c", 179);

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 10)
	gotoxy(10, 60); printf("%c", 179);

	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 217); // Canto inferior direito da tabela de dados

	for (i = 11; i <= 16; i++)
	{
		gotoxy(i, 1); printf("%c", 179);
	}
	gotoxy(11, 1); printf("%c", 195);
	gotoxy(13, 1); printf("%c", 195);
	gotoxy(15, 1); printf("%c", 195);
	gotoxy(11, 60); printf("%c", 180);
	gotoxy(13, 60); printf("%c", 180);
	gotoxy(15, 60); printf("%c", 180);

	for (i = 2; i < 60; i++)
	{
		gotoxy(17, i); printf("%c", 196);
	}
	gotoxy(17, 1); printf("%c", 192);
	gotoxy(17, 60); printf("%c", 217);

	gotoxy(12, 60); printf("%c", 179);
	gotoxy(14, 60); printf("%c", 179);
	gotoxy(16, 60); printf("%c", 179);
	//gotoxy(17, 60); printf("%c", 179);

	for (i = 2; i < 60; i++)
	{
		gotoxy(13, i); printf("%c", 196);
	}
	for (i = 2; i < 60; i++)
	{
		gotoxy(15, i); printf("%c", 196);
	}

}

void tabelaMenu() {
	cabecalho();
	int j = 0;
	LayoutTremzim();
	gotoxy(4, 1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 5)
	gotoxy(5, 60); printf("%c", 179);

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 6)
	gotoxy(6, 60); printf("%c", 179);

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 7)
	gotoxy(7, 60); printf("%c", 179);

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 8)
	gotoxy(8, 60); printf("%c", 179);

	gotoxy(9, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (i = 0; i < 58; i++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 180);					// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 10)
	gotoxy(10, 60); printf("%c", 179);

	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 217); 					// Canto inferior direito da tabela de dados

	//LayoutTremzim();
}

void LayoutTremzim()
{
	gotoxy(5, 66); printf("   ~~~~ ____   |~~~~~~~~~~~~~|");
	gotoxy(6, 66); printf("  Y_,___|[]|   |   Equipe 4  |");
	gotoxy(7, 66); printf(" {|_|_|_|PU|_,_|_____________|");
	gotoxy(8, 66); printf("//oo---OO=OO     OOO     OOO");
	gotoxy(4, 63); printf("%c", 201);
	for (i = 64; i <= 98; i++)
	{
		gotoxy(4, i); printf("%c", 205);
	}
	gotoxy(4, 99); printf("%c", 187);
	for (i = 5; i <= 8; i++)
	{
		gotoxy(i, 99); printf("%c", 186);
	}
	for (i = 5; i <= 8; i++)
	{
		gotoxy(i, 63); printf("%c", 186);
	}
	gotoxy(9, 63); printf("%c", 200);
	gotoxy(9, 99); printf("%c", 188);
	for (i = 64; i <= 98; i++)
	{
		gotoxy(9, i); printf("%c", 205);
	}
}

void gotoxy(int x, int y) {
	COORD c;
	c.X = y - 1;
	c.Y = x - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void cor(int cor_letra) {
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, cor_letra);
}

void sistemaTroco()
{
	classeEconomica = 0; classeExecutiva = 0; classeEconomicaCartao = 0; classeExecutivaCartao = 0;
	trocoCliente = 0;

	if (troco == 1)
	{
		for (i = 0; i < op3; i++)
		{
			if (pass6 || pass7 || pass8 || pass9 || pass10)
				classeEconomica += 35;
			if (pass1 || pass2 || pass3 || pass4 || pass5)
				classeExecutiva += 58;
		}
	}
	if (troco == 2 && resposta == 3)
	{
		for (i = 0; i < op3; i++)
		{
			if (pass6 || pass7 || pass8 || pass9 || pass10)
				classeEconomicaCartao += 35 - 1.75;

		}
		cor(192); gotoxy(16, 38); printf("Descontado = %.2f\n", classeEconomicaCartao);
	}

	if (troco == 2 && resposta == 4)
	{
		for (i = 0; i < op3; i++)
		{
			if (pass1 || pass2 || pass3 || pass4 || pass5)
				classeExecutivaCartao += 58 - 1.75;
		}
		cor(192); gotoxy(16, 38); printf("Descontado = %.2f\n", classeExecutivaCartao);
	}

	if (troco == 1 && resposta == 3)
	{
		trocoCliente = receberDinheiro - classeEconomica;
		cor(192); gotoxy(16, 38);  printf("Troco = %.2f\n", trocoCliente);
	}
	if (troco == 1 && resposta == 4)
	{
		trocoCliente2 = receberDinheiro - classeExecutiva;
		cor(192); gotoxy(16, 38); printf("Troco = %.2f\n", trocoCliente2);
	}
	cE += classeEconomica + classeEconomicaCartao;
	cE2 += classeExecutiva + classeExecutivaCartao;
}

void tabelaPassagensVendidas() {
	cabecalho();
	int j = 0, i = 0;

	gotoxy(4, 1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 5)
	gotoxy(5, 60); printf("%c", 179);

	gotoxy(7, 31); printf("%c", 179);
	gotoxy(7, 60); printf("%c", 179);

	gotoxy(6, 1); printf("%c", 195); 	// Traço vertical esquerdo com linha no meio
	for (j = 0; j < 58; j++) {
		printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	gotoxy(6, 31); printf("%c", 194);	// T para baixo
	gotoxy(6, 60); printf("%c", 180);	// Traço vertical direito com linha no meio

	printf("\n%c", 179);				// Traço vertical esquerdo da tabela de dados (linha 7)

	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for (j = 0; j < 28; j++) {
		gotoxy(8, i); printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	for (j = 32; j < 62; j++) {
		gotoxy(8, i); printf("%c", 196);				// Traço horizontal da tabela de dados
	}
	//printf("%c", 217); 					// Canto inferior direito da tabela de dados

	gotoxy(8, 31); printf("%c", 193);	// T para cima


	gotoxy(9, 1); printf("%c", 179);
	gotoxy(10, 1); printf("%c", 179);
	gotoxy(9, 60); printf("%c", 179);
	gotoxy(10, 60); printf("%c", 179);
	gotoxy(9, 31); printf("%c", 179);
	gotoxy(10, 31); printf("%c", 179);
	gotoxy(8, 1); printf("%c", 195);
	gotoxy(8, 60); printf("%c", 180);
	gotoxy(8, 31); printf("%c", 197);
	gotoxy(11, 31); printf("%c", 193);
	gotoxy(11, 1); printf("%c", 192);
	gotoxy(11, 60); printf("%c", 217);
	for (i = 2; i < 31; i++)
	{
		gotoxy(11, i); printf("%c", 196);
	}
	for (i = 32; i < 60; i++)
	{
		gotoxy(11, i); printf("%c", 196);
	}
	cor(192); gotoxy(9, 8); printf("Vendas Executivas");
	cor(15); gotoxy(10, 9); printf("R$ = %.2f", cE2);
	cor(192); gotoxy(9, 38); printf("Vendas Econ%cmicas",147);
	cor(15); gotoxy(10, 39); printf("R$ = %.2f", cE);
}
