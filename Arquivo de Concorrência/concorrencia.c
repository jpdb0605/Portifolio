#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define NR_DE_CLIENTES_NO_DIA 100
#define NR_DE_CADEIRAS 5

int cadeirasOcupadas = 0;
int podeEntrar = 1; // 0 não pode entrar e 1 pode
int clientesAtendidos = 0;

pthread_mutex_t mutexCadeiras = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t entradaLiberada = PTHREAD_COND_INITIALIZER;
pthread_cond_t cadeirasLivres = PTHREAD_COND_INITIALIZER;

void sentarCadeira(int idCliente) {
    printf("Sou o cliente %d e estou sentando no bar\n", idCliente);
    //Dorme por um tempo aleatório de 0 a 9 antes de tentar comer o sushi
    sleep(rand()%10);
}

void comerSushi(int idCliente) {
    printf("Sou o cliente %d e estou comendo sushi\n", idCliente);
    sleep(1);
}

void chegandoFila(int idCliente) {
    printf("Sou o cliente %d e estou chegando na fila\n", idCliente);
}

void *comendo(void *arg) {
    int idCliente = *(int *)arg;
    chegandoFila(idCliente);
    pthread_mutex_lock(&mutexCadeiras);
    while (cadeirasOcupadas == NR_DE_CADEIRAS) {
        pthread_cond_wait(&cadeirasLivres, &mutexCadeiras);
    }
    cadeirasOcupadas++;
    pthread_mutex_unlock(&mutexCadeiras);

    //Sentando na Cadeira
    sentarCadeira(idCliente);
    //Cliente come sushi
    comerSushi(idCliente);

    pthread_mutex_lock(&mutexCadeiras);
    cadeirasOcupadas--;
    clientesAtendidos++;
    pthread_cond_signal(&cadeirasLivres);
    pthread_mutex_unlock(&mutexCadeiras);

    pthread_exit(NULL);
}

int main() {
    pthread_t clientes[NR_DE_CLIENTES_NO_DIA];
    int idClientes[NR_DE_CLIENTES_NO_DIA];

    srand(time(NULL));

    //Cria threads para cada um dos clientes
    for (int i = 0; i < NR_DE_CLIENTES_NO_DIA; i++) {
        idClientes[i] = i;
        pthread_create(&clientes[i], NULL, comendo, (void *)&idClientes[i]);
        usleep(rand()%1000); // Gera uma espera antes de criar uma nova thread
    }

    for (int i = 0; i < NR_DE_CLIENTES_NO_DIA; i++) {
        pthread_join(clientes[i], NULL);
    }

    return 0;
}
