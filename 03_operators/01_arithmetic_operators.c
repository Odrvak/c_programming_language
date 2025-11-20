#include <stdio.h>

int main(void) {
    int a = 15, b = 4;

    printf("a = %d, b = %d\n\n", a, b);
    printf("Addition: a + b = %d\n", a + b);
    printf("Subtraction: a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Division: a / b = %d\n", a / b);
    printf("Modulus: a %% b = %d\n", a % b);

    float x = 15.0f, y = 4.0f;
    printf("\nx = %.1f, y = %.1f\n", x, y);
    printf("Float division: x / y = %.2f\n", x / y);

    return 0;
}
