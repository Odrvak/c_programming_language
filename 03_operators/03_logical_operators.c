#include <stdio.h>

int main(void) {
    int a = 1, b = 0;

    printf("a = %d (true), b = %d (false)\n\n", a, b);
    printf("a && b (AND): %d\n", a && b);
    printf("a || b (OR): %d\n", a || b);
    printf("!a (NOT): %d\n", !a);
    printf("!b (NOT): %d\n", !b);

    int x = 5, y = 10, z = 15;
    printf("\nCombined: (x < y) && (y < z) = %d\n", (x < y) && (y < z));
    printf("Combined: (x > y) || (y < z) = %d\n", (x > y) || (y < z));

    return 0;
}
