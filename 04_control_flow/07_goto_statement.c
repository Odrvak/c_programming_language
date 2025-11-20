#include <stdio.h>

int main(void) {
    int i = 0;

    start:
    printf("i = %d\n", i);
    i++;

    if (i < 5) {
        goto start;
    }

    printf("\nNested loop with goto:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (x == 1 && y == 1) {
                goto end;
            }
            printf("(%d, %d) ", x, y);
        }
    }

    end:
    printf("\nExited using goto\n");

    return 0;
}
