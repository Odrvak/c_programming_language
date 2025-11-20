#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("\nSum: %d\n", sum);

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }

    printf("\nSquares:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
