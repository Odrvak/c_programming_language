#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t semaphore;
int shared_resource = 0;

void* access_resource(void *arg) {
    int thread_id = *(int *)arg;

    printf("Thread %d waiting for resource\n", thread_id);
    sem_wait(&semaphore);

    printf("Thread %d accessing resource\n", thread_id);
    shared_resource++;
    sleep(1);
    printf("Thread %d releasing resource\n", thread_id);

    sem_post(&semaphore);

    return NULL;
}

int main(void) {
    pthread_t threads[5];
    int thread_ids[5] = {1, 2, 3, 4, 5};

    sem_init(&semaphore, 0, 2);

    for (int i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, access_resource, &thread_ids[i]);
    }

    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&semaphore);

    printf("All threads finished. Resource count: %d\n", shared_resource);

    return 0;
}
