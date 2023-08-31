#include <stdio.h>

#define MAX_TAM 100

int main() {
    int matriz[MAX_TAM][MAX_TAM];
    int linhas, colunas;
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);
    printf("\n");

    printf("Digite os elementos da matriz: ");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
  
    int escol, index, numult;
    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna: ");
    scanf("%d", &escol);
    printf("\n");
    if (escol == 1) {
        printf("Digite o indice da linha (0 a %d): ", linhas - 1);
        scanf("%d", &index);
        printf("Digite o multiplicador: ");
        scanf("%d", &numult);
        for (int j = 0; j < colunas; j++) {
            matriz[index][j] *= numult;
        }
        printf("\n");
    } else if (escol == 2) {
        printf("Digite o indice da coluna (0 a %d): ", colunas - 1);
        scanf("%d", &index);
        printf("Digite o multiplicador: ");
        scanf("%d", &numult);
        for (int i = 0; i < linhas; i++) {
            matriz[i][index] *= numult;
        }
        printf("\n");
    } else {
        printf("Opção inválida!\n");
        return 1;
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
