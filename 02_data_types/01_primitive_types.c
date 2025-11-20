#include <stdio.h>

int main(void) {
    char c = 'A';
    int i = 42;
    float f = 3.14f;
    double d = 3.14159265359;

    printf("char: %c (size: %zu bytes)\n", c, sizeof(char));
    printf("int: %d (size: %zu bytes)\n", i, sizeof(int));
    printf("float: %.2f (size: %zu bytes)\n", f, sizeof(float));
    printf("double: %.11f (size: %zu bytes)\n", d, sizeof(double));

    return 0;
}
