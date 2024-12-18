#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h> // For sleep

#define N 5           // Number of philosophers
#define CYCLES 3      // Number of cycles each philosopher goes through (eating and thinking)

sem_t forks[N];

void* philosopher(void* num) {
    int id = *(int*)num;

    for (int i = 0; i < CYCLES; i++) {
        printf("Philosopher %d is thinking.\n", id);
        sleep(1);  // Thinking for a while
        
        sem_wait(&forks[id]);
        sem_wait(&forks[(id + 1) % N]);

        printf("Philosopher %d is eating.\n", id);
        sleep(1);  // Eating for a while

        sem_post(&forks[id]);
        sem_post(&forks[(id + 1) % N]);
    }
    
    printf("Philosopher %d has finished eating and thinking.\n", id);
    return NULL;
}

int main() {
    pthread_t philosophers[N];
    int ids[N];

    // Initialize the semaphores (forks)
    for (int i = 0; i < N; i++) {
        sem_init(&forks[i], 0, 1);
        ids[i] = i;
    }

    // Create philosopher threads
    for (int i = 0; i < N; i++) {
        pthread_create(&philosophers[i], NULL, philosopher, &ids[i]);
    }

    // Wait for all philosophers to finish
    for (int i = 0; i < N; i++) {
        pthread_join(philosophers[i], NULL);
    }

    // Destroy the semaphores
    for (int i = 0; i < N; i++) {
        sem_destroy(&forks[i]);
    }

    return 0;
}
