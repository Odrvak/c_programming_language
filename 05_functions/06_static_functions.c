#include <stdio.h>

static int counter = 0;

static void increment_counter(void);
void call_counter(void);

int main(void) {
    for (int i = 0; i < 5; i++) {
        call_counter();
    }

    return 0;
}

static void increment_counter(void) {
    counter++;
}

void call_counter(void) {
    increment_counter();
    printf("Counter: %d\n", counter);
}
