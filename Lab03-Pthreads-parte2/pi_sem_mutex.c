#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int thread_count;
int n;
double sum;

void* Thread_sum(void* rank) {
    long my_rank = (long) rank;
    double factor;
    long long i;
    long long my_n = n / thread_count;
    long long my_first_i = my_n * my_rank;
    long long my_last_i = my_first_i + my_n;

    if (my_first_i % 2 == 0)
        factor = 1.0;
    else
        factor = -1.0;

    for (i = my_first_i; i < my_last_i; i++, factor = -factor) {
        sum += factor / (2.0 * i + 1);
    }

    return NULL;
}

int main(int argc, char* argv[]) {
    long       thread;
    pthread_t* thread_handles;

    thread_count = strtol(argv[1], NULL, 10);
    n = strtol(argv[2], NULL, 10);

    if(thread_count > n){
        printf("Erro: O número de threads não pode ser maior que o número de termos.\n");
        return -1;
    }

    thread_handles = malloc(thread_count*sizeof(pthread_t));
    sum = 0.0;

    for (thread = 0; thread < thread_count; thread++)
        pthread_create(&thread_handles[thread], NULL, Thread_sum, (void*)thread);

    for (thread = 0; thread < thread_count; thread++) {
        pthread_join(thread_handles[thread], NULL);
    }

    sum = 4.0*sum;

    printf("Número de threads: %d\n", thread_count);
    printf("Valor de pi calculado pelo algoritmo: %.15f\n", sum);

    free(thread_handles);
    return 0;
}