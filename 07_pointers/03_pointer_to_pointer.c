#include <stdio.h>

int main(void) {
    int num = 42;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("\n");

    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Address of ptr: %p\n", (void *)&ptr);
    printf("\n");

    printf("Value of pptr: %p\n", (void *)pptr);
    printf("Value pointed by pptr: %p\n", (void *)*pptr);
    printf("Value pointed by *pptr: %d\n", **pptr);

    **pptr = 100;
    printf("\nAfter **pptr = 100:\n");
    printf("num = %d\n", num);

    return 0;
}
