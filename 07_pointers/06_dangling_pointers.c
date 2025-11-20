#include <stdio.h>
#include <stdlib.h>

int* get_local_address(void);

int main(void) {
    int *ptr1 = (int *)malloc(sizeof(int));
    *ptr1 = 42;
    printf("Value: %d\n", *ptr1);

    free(ptr1);
    ptr1 = NULL;

    if (ptr1 == NULL) {
        printf("ptr1 is now NULL (no longer dangling)\n");
    }

    int *ptr2 = get_local_address();
    printf("\nptr2 address: %p\n", (void *)ptr2);

    return 0;
}

int* get_local_address(void) {
    int local = 100;
    return &local;
}
