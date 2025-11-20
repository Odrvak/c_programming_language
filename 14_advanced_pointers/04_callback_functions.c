#include <stdio.h>

void execute_operation(int a, int b, int (*callback)(int, int)) {
    int result = callback(a, b);
    printf("Result: %d\n", result);
}

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

void process_array(int arr[], int size, void (*callback)(int)) {
    for (int i = 0; i < size; i++) {
        callback(arr[i]);
    }
}

void print_element(int value) {
    printf("%d ", value);
}

int main(void) {
    execute_operation(10, 5, add);
    execute_operation(10, 5, multiply);

    int numbers[] = {1, 2, 3, 4, 5};
    printf("\nArray elements: ");
    process_array(numbers, 5, print_element);
    printf("\n");

    return 0;
}
