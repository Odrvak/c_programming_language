#include <stdio.h>

int main(void) {
    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(short) = %zu bytes\n", sizeof(short));
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(long) = %zu bytes\n", sizeof(long));
    printf("sizeof(long long) = %zu bytes\n", sizeof(long long));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(long double) = %zu bytes\n", sizeof(long double));
    printf("sizeof(void*) = %zu bytes\n", sizeof(void*));

    int arr[10];
    printf("sizeof(arr) = %zu bytes\n", sizeof(arr));
    printf("Number of elements = %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
