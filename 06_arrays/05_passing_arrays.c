#include <stdio.h>

void print_array(int arr[], int size);
int sum_array(int *arr, int size);
void modify_array(int arr[], int size);

int main(void) {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Original array:\n");
    print_array(numbers, 5);

    int total = sum_array(numbers, 5);
    printf("\nSum: %d\n", total);

    modify_array(numbers, 5);
    printf("\nModified array:\n");
    print_array(numbers, 5);

    return 0;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum_array(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void modify_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
