#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Original array (%d elements):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = 10;
    int *temp = (int *)realloc(arr, n * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }

    arr = temp;

    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("\nResized array (%d elements):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
