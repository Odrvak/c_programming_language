#include <stdio.h>

int main(void) {
    int i = 0;

    do {
        printf("Iteration: %d\n", i);
        i++;
    } while (i < 5);

    int num;
    do {
        printf("\nEnter a positive number (0 to exit): ");
        scanf("%d", &num);
        if (num > 0) {
            printf("You entered: %d\n", num);
        }
    } while (num != 0);

    printf("Exited loop\n");

    return 0;
}
