#include <stdio.h>

int main() {
    int max_num;
    printf("Digite o numero maximo (impar): ");
    scanf("%d", &max_num);

    for (int i = 1; i <= max_num; i += 2) {
        for (int j = 0; j < i / 2; j++) {
            printf("  ");
        }
        for (int j = i; j <= max_num; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
