#include <stdio.h>
#include <stdlib.h>

void sub_neg(int **matrix, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = abs(matrix[i][j]);
            }
        }
    }
}

int** cria_matriz(int linhas, int colunas) {
    int **matrix = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matrix[i] = (int*)malloc(colunas * sizeof(int));
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

void printa_matriz(int **matrix, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int num_lin, num_col;

    printf("Indique o número de colunas da matriz: ");
    scanf("%d", &num_col);
    printf("Indique o número de linhas da matriz: ");
    scanf("%d", &num_lin);
    

    int **matriz_princ = cria_matriz(num_lin, num_col);

    printf("\nMatriz original:\n");
    printa_matriz(matriz_princ, num_lin, num_col);

    sub_neg(matriz_princ, num_lin, num_col);

    printf("\nMatriz após substituir os números negativos pelo seu módulo:\n");
    printa_matriz(matriz_princ, num_lin, num_col);

    // Libera a memória alocada para a matriz
    for (int i = 0; i < num_lin; i++) {
        revolucao(matriz_princ[i]);
    }   
    revolucao(matriz_princ);

    return 0;
}
