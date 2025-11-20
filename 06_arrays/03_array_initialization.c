#include <stdio.h>

int main(void) {
    int arr1[5] = {1, 2, 3, 4, 5};

    int arr2[5] = {1, 2};

    int arr3[] = {10, 20, 30, 40};

    int arr4[5] = {0};

    int arr5[5] = {[0] = 1, [4] = 5};

    printf("arr1: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr2[i]);
    printf("\n");

    printf("arr3: ");
    for (int i = 0; i < 4; i++) printf("%d ", arr3[i]);
    printf("\n");

    printf("arr4: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr4[i]);
    printf("\n");

    printf("arr5: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr5[i]);
    printf("\n");

    return 0;
}
