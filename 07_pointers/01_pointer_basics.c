#include <stdio.h>

int main(void) {
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    int x = 10, y = 20;
    int *p = &x;
    printf("\np points to x: %d\n", *p);

    p = &y;
    printf("p now points to y: %d\n", *p);

    return 0;
}
