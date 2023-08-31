#include <stdio.h>
#include <string.h>

void inserirCaractere(char str[100], int pos, char c);

int main() {
    int posicao_caracter = 20;
    char caracter = 'o';
    char Str[100];
    for (int i = 0; i < 100; i++) {
        Str[i] = 'A' + (i % 26);
    }
    printf("String: %s\n", Str);
    inserirCaractere(Str, posicao_caracter, caracter);
    printf("String após inserção do caracter na posiçao %d: %s\n", posicao_caracter, Str);
    return 0;
}

void inserirCaractere(char str[100], int pos, char c) {
    int tam = strlen(str);
    for (int i = tam; i > pos; i--) {
        str[i] = str[i - 1];
    }
    str[pos] = c;
}
