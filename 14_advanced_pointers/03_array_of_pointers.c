#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *ptr_arr[5] = {&a, &b, &c, &d, &e};

    printf("Array of pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr_arr[%d] = %d\n", i, *ptr_arr[i]);
    }

    char *names[] = {
        "Alice",
        "Bob",
        "Charlie",
        "David"
    };

    printf("\nArray of string pointers:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
