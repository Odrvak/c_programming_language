#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n\n", argc);

    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    if (argc > 1) {
        printf("\nProgram name: %s\n", argv[0]);
        printf("First argument: %s\n", argv[1]);
    } else {
        printf("\nNo arguments provided.\n");
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
    }

    return 0;
}
