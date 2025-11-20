#include <stdio.h>

int main(void) {
    int a = 10;

    printf("Initial value: a = %d\n", a);

    a += 5;
    printf("a += 5: %d\n", a);

    a -= 3;
    printf("a -= 3: %d\n", a);

    a *= 2;
    printf("a *= 2: %d\n", a);

    a /= 4;
    printf("a /= 4: %d\n", a);

    a %= 3;
    printf("a %%= 3: %d\n", a);

    a <<= 2;
    printf("a <<= 2: %d\n", a);

    a >>= 1;
    printf("a >>= 1: %d\n", a);

    a &= 3;
    printf("a &= 3: %d\n", a);

    a |= 4;
    printf("a |= 4: %d\n", a);

    a ^= 2;
    printf("a ^= 2: %d\n", a);

    return 0;
}
