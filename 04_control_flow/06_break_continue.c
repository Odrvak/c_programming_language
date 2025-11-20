#include <stdio.h>

int main(void) {
    printf("Break example:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Continue example:\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Finding first even number greater than 100:\n");
    int n = 101;
    while (1) {
        if (n % 2 == 0) {
            printf("Found: %d\n", n);
            break;
        }
        n++;
    }

    return 0;
}
