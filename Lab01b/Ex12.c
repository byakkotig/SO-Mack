#include <stdio.h>

int main() {
    char caracter = 'c';
    char string[10] = {'c', 'a', 'c', 'i', 'q', 'u', 'e'};
    printf("O caracter c foi encontrado nas posições: ");
    for (int i = 0; i < sizeof(string) * sizeof(char); i++)
    {
        if (caracter == string[i])
        {
            printf("%d ", i);
        }
    }
    return 0;
}
