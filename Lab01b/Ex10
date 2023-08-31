#include <stdio.h>
#include <stdlib.h>

int** multiplicarLinha(int **matriz, int n, int m, int linha, int multiplicador);
int** multiplicarColuna(int **matriz, int n, int m, int coluna, int multiplicador);

int main()
{
    int linhas = 2, colunas = 2;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i=0; i < linhas; i++)
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;
    int multiplicador = 2;
    int linha = 1;
    int coluna = 1;

    printf("Matriz original: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int **matriz_resultante_1 = multiplicarLinha(matriz, linhas, colunas, linha, multiplicador);

    printf("\nMatriz com linha %d multiplicada por %d: \n", linha, multiplicador);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz_resultante_1[i][j]);
        }
        printf("\n");
    }

    int **matriz_resultante_2 = multiplicarColuna(matriz, linhas, colunas, coluna, multiplicador);

    printf("\nMatriz com coluna %d multiplicada por %d: \n", coluna + 1, multiplicador);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz_resultante_2[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}

int** multiplicarLinha(int **matriz, int n, int m, int linha, int multiplicador) {
    for (int i = 0; i < m; i++) {
        matriz[linha - 1][i] *= multiplicador;
    }
    return matriz;
}


int** multiplicarColuna(int **matriz, int n, int m, int coluna, int multiplicador) {
    int i;
    for (i = 0; i < n; i++) {
        matriz[i][coluna] *= multiplicador;
    }
    return matriz;
}
