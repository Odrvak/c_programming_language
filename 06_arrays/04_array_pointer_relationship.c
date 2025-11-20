#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Array elements using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nArray elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    printf("\nAddresses:\n");
    printf("arr = %p\n", (void *)arr);
    printf("&arr[0] = %p\n", (void *)&arr[0]);
    printf("ptr = %p\n", (void *)(ptr - 5));

    return 0;
}
