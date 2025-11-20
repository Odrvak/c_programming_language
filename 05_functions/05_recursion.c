#include <stdio.h>

int factorial(int n);
int fibonacci(int n);
int power(int base, int exp);
void print_numbers(int n);

int main(void) {
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));

    printf("\nFibonacci sequence (first 10):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    printf("\n2^10 = %d\n", power(2, 10));

    printf("\nCounting down:\n");
    print_numbers(5);

    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

void print_numbers(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", n);
    print_numbers(n - 1);
}
