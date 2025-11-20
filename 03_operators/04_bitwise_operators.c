#include <stdio.h>

int main(void) {
    unsigned int a = 60, b = 13;

    printf("a = %u (binary: 0011 1100)\n", a);
    printf("b = %u (binary: 0000 1101)\n\n", b);

    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("~a = %u\n", ~a);
    printf("a << 2 = %u\n", a << 2);
    printf("a >> 2 = %u\n", a >> 2);

    return 0;
}
