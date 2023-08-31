#include <stdio.h>

int main (){
    int matriz[3][3] = {
        {3, 8, 6},
        {5, 7, 4},
        {9, 2, 1}
    };
    int tamanho = 3;

    int linhaMenor = 0;
    int menorNumero = matriz[0][0];

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (matriz[i][j] < menorNumero) {
                menorNumero = matriz[i][j];
                linhaMenor = i;
            }
        }
    }
    
    printf("A linha com o menor número é %d\n", linhaMenor + 1);
    
    return 0;
}