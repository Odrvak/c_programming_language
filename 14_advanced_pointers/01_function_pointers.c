#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main(void) {
    int (*operation)(int, int);

    operation = add;
    printf("10 + 5 = %d\n", operation(10, 5));

    operation = subtract;
    printf("10 - 5 = %d\n", operation(10, 5));

    operation = multiply;
    printf("10 * 5 = %d\n", operation(10, 5));

    int (*func_ptr)(int, int) = add;
    printf("Direct call: 7 + 3 = %d\n", func_ptr(7, 3));

    return 0;
}
