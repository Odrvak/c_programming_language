#include <stdio.h>

int main(void) {
    int count = 0;

    while (count < 5) {
        printf("Count: %d\n", count);
        count++;
    }

    int sum = 0;
    int n = 1;
    while (n <= 10) {
        sum += n;
        n++;
    }
    printf("\nSum of 1 to 10: %d\n", sum);

    int num = 1234;
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    printf("Number of digits: %d\n", digits);

    return 0;
}
