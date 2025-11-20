#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inefficient_loop(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += i * 2;
    }
}

void efficient_loop(int n) {
    int result = 0;
    int double_i = 0;
    for (int i = 0; i < n; i++) {
        result += double_i;
        double_i += 2;
    }
}

int* allocate_inefficient(int n) {
    int *arr = (int *)malloc(sizeof(int));
    for (int i = 0; i < n; i++) {
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = i;
    }
    return arr;
}

int* allocate_efficient(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

double measure_time(void (*func)(int), int n) {
    clock_t start = clock();
    func(n);
    clock_t end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

int main(void) {
    int iterations = 10000000;

    double time1 = measure_time(inefficient_loop, iterations);
    printf("Inefficient loop time: %.6f seconds\n", time1);

    double time2 = measure_time(efficient_loop, iterations);
    printf("Efficient loop time: %.6f seconds\n", time2);

    printf("\nAllocation comparison:\n");
    clock_t start = clock();
    int *arr1 = allocate_inefficient(1000);
    printf("Inefficient allocation: %.6f seconds\n",
           ((double)(clock() - start)) / CLOCKS_PER_SEC);
    free(arr1);

    start = clock();
    int *arr2 = allocate_efficient(1000);
    printf("Efficient allocation: %.6f seconds\n",
           ((double)(clock() - start)) / CLOCKS_PER_SEC);
    free(arr2);

    return 0;
}
