#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;

    printf("a = %d, b = %d\n", a, b);
    printf("Maximum: %d\n", max);

    int num = 15;
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");

    int x = -5;
    int abs_value = (x < 0) ? -x : x;
    printf("Absolute value of %d is %d\n", x, abs_value);

    return 0;
}
