#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int global_variable = 42;

void display_info(void);

int main(void) {
    int local_variable = 10;

    printf("Local: %d\n", local_variable);
    printf("Global: %d\n", global_variable);

    display_info();

    return EXIT_SUCCESS;
}

void display_info(void) {
    printf("Function called successfully\n");
}
