#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);
double average(int count, ...);
void print_values(int count, ...);

int main(void) {
    printf("Sum: %d\n", sum(4, 10, 20, 30, 40));
    printf("Sum: %d\n", sum(3, 5, 10, 15));

    printf("Average: %.2f\n", average(4, 10, 20, 30, 40));

    print_values(5, 1, 2, 3, 4, 5);

    return 0;
}

int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total / count;
}

void print_values(int count, ...) {
    va_list args;
    va_start(args, count);

    printf("Values: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", va_arg(args, int));
    }
    printf("\n");

    va_end(args);
}
