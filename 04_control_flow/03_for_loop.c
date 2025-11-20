#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    printf("\nCounting down:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\nEven numbers:\n");
    for (int i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\nNested loops:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }

    return 0;
}
