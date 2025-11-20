#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_with_return(void *arg) {
    int *result = malloc(sizeof(int));
    *result = *(int *)arg * 2;
    printf("Thread computing: %d * 2 = %d\n", *(int *)arg, *result);
    pthread_exit(result);
}

void* thread_with_cancel(void *arg) {
    for (int i = 0; i < 10; i++) {
        printf("Thread running: iteration %d\n", i);
        sleep(1);
        pthread_testcancel();
    }
    return NULL;
}

int main(void) {
    pthread_t thread1, thread2;
    int input = 5;
    int *result;

    pthread_create(&thread1, NULL, thread_with_return, &input);
    pthread_join(thread1, (void **)&result);
    printf("Thread returned: %d\n", *result);
    free(result);

    pthread_create(&thread2, NULL, thread_with_cancel, NULL);
    sleep(2);
    pthread_cancel(thread2);
    pthread_join(thread2, NULL);
    printf("Thread cancelled\n");

    return 0;
}
