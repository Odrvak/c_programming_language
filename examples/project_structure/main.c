#include <stdio.h>
#include "calculator.h"
#include "utils.h"

int main(void) {
    print_header("Calculator Program");

    int a = 10, b = 5;

    printf("Addition: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtraction: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Division: %d / %d = %d\n", a, b, divide(a, b));

    print_separator();

    return 0;
}
