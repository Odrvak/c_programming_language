#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_function(void *arg) {
    int thread_id = *(int *)arg;
    printf("Thread %d started\n", thread_id);
    sleep(1);
    printf("Thread %d finished\n", thread_id);
    return NULL;
}

int main(void) {
    pthread_t threads[3];
    int thread_ids[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        if (pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]) != 0) {
            perror("Thread creation failed");
            return 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("All threads completed\n");

    return 0;
}
