#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 3, cols = 4;

    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }

    printf("Dynamic 2D array (method 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    int *flat = (int *)malloc(rows * cols * sizeof(int));
    value = 1;
    for (int i = 0; i < rows * cols; i++) {
        flat[i] = value++;
    }

    printf("\nFlat array as 2D:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", flat[i * cols + j]);
        }
        printf("\n");
    }

    free(flat);

    return 0;
}
