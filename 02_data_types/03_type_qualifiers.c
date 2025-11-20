#include <stdio.h>

int main(void) {
    const int constant = 100;
    volatile int sensor_value = 0;

    int x = 10;
    int * restrict ptr = &x;

    printf("constant: %d\n", constant);
    printf("volatile sensor_value: %d\n", sensor_value);
    printf("restrict pointer value: %d\n", *ptr);

    return 0;
}
