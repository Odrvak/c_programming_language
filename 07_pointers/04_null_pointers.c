#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = NULL;

    printf("Value of NULL pointer: %p\n", (void *)ptr);

    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    }

    ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 42;
        printf("Allocated memory, value: %d\n", *ptr);
        free(ptr);
        ptr = NULL;
    }

    if (ptr == NULL) {
        printf("Pointer is NULL after free\n");
    }

    return 0;
}
