#include <stdio.h>
#include <pthread.h>

int counter_unsafe = 0;
int counter_safe = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* increment_unsafe(void *arg) {
    for (int i = 0; i < 100000; i++) {
        counter_unsafe++;
    }
    return NULL;
}

void* increment_safe(void *arg) {
    for (int i = 0; i < 100000; i++) {
        pthread_mutex_lock(&mutex);
        counter_safe++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(void) {
    pthread_t threads[5];

    printf("Demonstrating race condition (unsafe):\n");
    for (int i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, increment_unsafe, NULL);
    }
    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("Unsafe counter: %d (expected: 500000)\n", counter_unsafe);

    printf("\nUsing mutex (safe):\n");
    for (int i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, increment_safe, NULL);
    }
    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("Safe counter: %d (expected: 500000)\n", counter_safe);

    pthread_mutex_destroy(&mutex);

    return 0;
}
