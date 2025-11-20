#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    int *arr1 = (int *)malloc(n * sizeof(int));
    printf("malloc (uninitialized):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    free(arr1);

    int *arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\ncalloc (zero-initialized):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        arr2[i] = (i + 1) * 100;
    }

    printf("\nAfter initialization:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr2);

    return 0;
}
