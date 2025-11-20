#include <stdio.h>
#include <stdlib.h>

void memory_leak_example(void) {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;
}

void proper_memory_management(void) {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 100;
        printf("Value: %d\n", *ptr);
        free(ptr);
    }
}

int main(void) {
    printf("Memory leak example (allocating without freeing):\n");
    for (int i = 0; i < 3; i++) {
        memory_leak_example();
    }

    printf("\nProper memory management:\n");
    for (int i = 0; i < 3; i++) {
        proper_memory_management();
    }

    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr != NULL) {
        arr = (int *)malloc(20 * sizeof(int));
        free(arr);
    }

    return 0;
}
