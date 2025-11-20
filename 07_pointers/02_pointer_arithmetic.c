#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d, Address: %p\n", i, *(ptr + i), (void *)(ptr + i));
    }

    printf("\nIncrementing pointer:\n");
    ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("*ptr = %d, Address: %p\n", *ptr, (void *)ptr);
        ptr++;
    }

    printf("\nPointer difference:\n");
    int *p1 = &arr[1];
    int *p2 = &arr[4];
    printf("p2 - p1 = %ld\n", p2 - p1);

    return 0;
}
