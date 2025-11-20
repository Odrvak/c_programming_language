#include <stdio.h>

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

inline int min(int a, int b) {
    return (a < b) ? a : b;
}

inline int square(int n) {
    return n * n;
}

int main(void) {
    int x = 10, y = 20;

    printf("Max of %d and %d: %d\n", x, y, max(x, y));
    printf("Min of %d and %d: %d\n", x, y, min(x, y));
    printf("Square of %d: %d\n", x, square(x));

    return 0;
}
