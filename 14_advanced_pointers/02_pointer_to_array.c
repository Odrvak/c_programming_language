#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &arr;

    printf("Using array pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);
    }
    printf("\n");

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*row_ptr)[4] = matrix;

    printf("\nMatrix using pointer to array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", row_ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
