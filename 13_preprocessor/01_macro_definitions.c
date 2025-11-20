#include <stdio.h>

#define PI 3.14159
#define MAX_SIZE 100
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PRINT_INT(x) printf(#x " = %d\n", x)

int main(void) {
    printf("PI = %.5f\n", PI);
    printf("MAX_SIZE = %d\n", MAX_SIZE);

    int num = 5;
    printf("SQUARE(%d) = %d\n", num, SQUARE(num));

    int a = 10, b = 20;
    printf("MAX(%d, %d) = %d\n", a, b, MAX(a, b));

    int value = 42;
    PRINT_INT(value);

    return 0;
}
