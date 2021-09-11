#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void ocorrencias(char *palavra, char const letra);

int main(){
    char palavra[MAX_SIZE], letra;

    printf("Digite a palavra: ");
    gets(palavra);

    printf("Digite a letra: ");
    letra = getchar();

    ocorrencias(palavra,letra);

    printf("Letra removida: %c\nNova palavra = %s",letra, palavra);

    return 0;
}

void ocorrencias(char *palavra, char const letra){
  	int i, len, j;

  	len = strlen(palavra);

  	for(i = 0; i < len; i++){
        if(palavra[i] == letra){
            for(j = i; j < len; j++){
                palavra[j] = palavra[j + 1];
            }
            len--;
            i--;
        }
  	}
}
