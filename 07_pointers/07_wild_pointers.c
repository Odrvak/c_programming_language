#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *wild_ptr;

    printf("Uninitialized pointer (wild): %p\n", (void *)wild_ptr);

    int *safe_ptr = NULL;
    printf("Initialized to NULL: %p\n", (void *)safe_ptr);

    int num = 42;
    int *initialized_ptr = &num;
    printf("Properly initialized: %p, value: %d\n", (void *)initialized_ptr, *initialized_ptr);

    int *dynamic_ptr = (int *)malloc(sizeof(int));
    if (dynamic_ptr != NULL) {
        *dynamic_ptr = 100;
        printf("Dynamic allocation: %p, value: %d\n", (void *)dynamic_ptr, *dynamic_ptr);
        free(dynamic_ptr);
    }

    return 0;
}
