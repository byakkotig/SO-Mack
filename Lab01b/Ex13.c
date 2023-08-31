#include <stdio.h>
#include <string.h>

void removerCaractere(char str[100], int pos);

int main() {
    int posicao_caracter = 20;
    char Str[100];
    for (int i = 0; i < 100; i++) {
        Str[i] = 'A' + (i % 26);
    }
    printf("String: %s\n", Str);
    removerCaractere(Str, posicao_caracter);
    printf("String após remoção do caracter na posiçao %d: %s\n", posicao_caracter, Str);
    return 0;
}

void removerCaractere(char str[100], int pos) {
    int tam = strlen(str);
    for (int i = pos; i < tam - 1; i++) {
        str[i] = str[i + 1];
    }
    str[tam - 1] = '\0';
}
