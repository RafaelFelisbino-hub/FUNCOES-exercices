#include <stdio.h>

int contarVogais(char palavra[]);

int main() {
    char palavra[20];
    int resultado;

    printf("Digite a palavra: ");
    scanf("%s",&palavra);
    resultado = contarVogais(palavra);
    printf("%i",resultado);

    return 0;
}


int contarVogais(char palavra[]) {
    char vogais[] = "aeiouAEIOU";
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {
                numVogais++;
                break;
            }
        }
    }

    return numVogais;
}
