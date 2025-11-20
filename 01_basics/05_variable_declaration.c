#include <stdio.h>

int main(void) {
    int a;
    int b = 10;
    int c = 20, d = 30;

    a = 5;

    const int constant_value = 100;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d, d = %d\n", c, d);
    printf("constant_value = %d\n", constant_value);

    return 0;
}
