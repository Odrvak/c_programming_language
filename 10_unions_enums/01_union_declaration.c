#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(void) {
    union Data data;

    printf("Size of union: %zu bytes\n\n", sizeof(union Data));

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 3.14f;
    printf("data.f: %.2f\n", data.f);

    snprintf(data.str, sizeof(data.str), "Hello");
    printf("data.str: %s\n", data.str);

    printf("\nAfter storing string:\n");
    printf("data.i: %d (corrupted)\n", data.i);
    printf("data.f: %f (corrupted)\n", data.f);

    return 0;
}
