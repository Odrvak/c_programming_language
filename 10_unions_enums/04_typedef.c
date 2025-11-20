#include <stdio.h>

typedef unsigned long ulong;
typedef char* string;

typedef struct {
    int x;
    int y;
} Point;

typedef enum {
    FALSE,
    TRUE
} Boolean;

typedef int (*MathFunc)(int, int);

int add(int a, int b) {
    return a + b;
}

int main(void) {
    ulong big_number = 1000000UL;
    printf("big_number: %lu\n", big_number);

    string message = "Hello, World!";
    printf("message: %s\n", message);

    Point p = {10, 20};
    printf("Point: (%d, %d)\n", p.x, p.y);

    Boolean flag = TRUE;
    printf("flag: %d\n", flag);

    MathFunc operation = add;
    printf("5 + 3 = %d\n", operation(5, 3));

    return 0;
}
