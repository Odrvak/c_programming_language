#include <stdio.h>

int main(void) {
    int a = 5, b = 5;

    printf("Initial: a = %d, b = %d\n\n", a, b);

    printf("Post-increment a++: %d\n", a++);
    printf("After post-increment: a = %d\n\n", a);

    printf("Pre-increment ++b: %d\n", ++b);
    printf("After pre-increment: b = %d\n\n", b);

    printf("Post-decrement a--: %d\n", a--);
    printf("After post-decrement: a = %d\n\n", a);

    printf("Pre-decrement --b: %d\n", --b);
    printf("After pre-decrement: b = %d\n", b);

    return 0;
}
