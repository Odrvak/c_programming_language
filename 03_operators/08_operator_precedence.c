#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 30;

    int result1 = a + b * c;
    printf("a + b * c = %d\n", result1);

    int result2 = (a + b) * c;
    printf("(a + b) * c = %d\n", result2);

    int result3 = a < b && b < c;
    printf("a < b && b < c = %d\n", result3);

    int result4 = a + b > c ? a : b;
    printf("a + b > c ? a : b = %d\n", result4);

    int x = 5;
    int result5 = ++x * 2;
    printf("++x * 2 (x=%d) = %d\n", x, result5);

    return 0;
}
