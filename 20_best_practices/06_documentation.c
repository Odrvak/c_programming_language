#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* create_dynamic_array(int size) {
    if (size <= 0) {
        return NULL;
    }

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }

    return array;
}

int main(void) {
    int x = 5, y = 10;

    int sum = add(x, y);
    printf("Sum: %d\n", sum);

    int fact = factorial(5);
    printf("Factorial of 5: %d\n", fact);

    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);

    int *arr = create_dynamic_array(10);
    if (arr != NULL) {
        printf("Array created successfully\n");
        free(arr);
    }

    return 0;
}
