#include <stdio.h>

int main(void) {
    int i = 10;
    float f = 3.14f;
    char c = 'A';

    void *ptr;

    ptr = &i;
    printf("Integer: %d\n", *(int *)ptr);

    ptr = &f;
    printf("Float: %.2f\n", *(float *)ptr);

    ptr = &c;
    printf("Character: %c\n", *(char *)ptr);

    int arr[5] = {1, 2, 3, 4, 5};
    ptr = arr;
    printf("\nArray elements:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d ", *((int *)ptr + j));
    }
    printf("\n");

    return 0;
}
