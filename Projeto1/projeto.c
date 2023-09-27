#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include <stdio.h>

#define MAX_THREADS 100

pthread_mutex_t print_mutex;
bool saldo_zerado = false;

struct c {
 int saldo;
};
typedef struct c conta;
conta from, to;
int valor;

void *transferencia(void *arg)
{
    pthread_mutex_lock(&print_mutex);
    conta* conta1 = &from;
    conta* conta2 = &to;
    if (rand() % 2 == 0) {
        conta1 = &to;
        conta2 = &from;
    }
    
    if (conta1->saldo <= 0){ 
        saldo_zerado = true;
        return (void*)1;
    }
    if (conta1->saldo >= valor){ 
        conta1->saldo -= valor;
        conta2->saldo += valor;
    }

    printf("Transferência concluída com sucesso!\nSaldo de from: %d\nSaldo de to: %d\n", from.saldo, to.saldo);
    pthread_mutex_unlock(&print_mutex);
    return (void*)0;
}

int main()
{
    srand(time(NULL));
    
    pthread_mutex_init(&print_mutex, NULL);

    int num_threads, i;
    printf("Digite o número de threads (entre 1 e 100): ");
    scanf("%d", &num_threads);
    if(num_threads < 1 || num_threads > MAX_THREADS) {
        printf("Número inválido de threads. Deve ser entre 1 e 100.\n");
        return 1;
    }

    printf("Digite o saldo inicial para a conta 'from': ");
    scanf("%d", &from.saldo);

    printf("Digite o saldo inicial para a conta 'to': ");
    scanf("%d", &to.saldo);

    printf("Digite o valor das transações: ");
    scanf("%d", &valor);

    pthread_t threads[num_threads];

    for (i = 0; i < num_threads; i++) {
        if (pthread_create(&threads[i], NULL, transferencia, NULL) != 0) {
            perror("pthread_create");
            exit(1);
        }
        if (saldo_zerado) {
            printf("O saldo está zerado, não haverão mais transferências.\n");
            break;
        }
    }

    for (i = 0; i < num_threads; i++) {
        if (!saldo_zerado) {
            pthread_join(threads[i], NULL);
        }
    }

    pthread_mutex_destroy(&print_mutex);

    printf("Transferências concluídas e memória liberada.\n");

    return 0;
}