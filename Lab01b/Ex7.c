#include <stdio.h>

#define MAX_PESSOAS 3

typedef struct {
  char nome[100];
  int idade;
  float massa;
  float altura;
} Pessoa;

int main() {
  Pessoa people[MAX_PESSOAS];

  for (int i = 0; i < MAX_PESSOAS; i++) {
    printf("Digite o nome da pessoa %d: ", i + 1);
    scanf("%s", people[i].nome);
    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%d", &people[i].idade);
    printf("Digite o massa da pessoa %d: ", i + 1);
    scanf("%f", &people[i].massa);
    printf("Digite a altura da pessoa %d: ", i + 1);
    scanf("%f", &people[i].altura);
    printf("\n\n");
  }

  printf("\nDados das pessoas:\n\n");
  for (int i = 0; i < MAX_PESSOAS; i++) {
    printf("Nome: %s\n", people[i].nome);
    printf("Idade: %d\n", people[i].idade);
    printf("Massa: %.2f\n", people[i].massa);
    printf("Altura: %.2f\n", people[i].altura);
    printf("\n");
  }

  return 0;
}
