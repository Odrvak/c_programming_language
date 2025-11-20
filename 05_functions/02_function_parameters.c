#include <stdio.h>

void pass_by_value(int x);
void pass_by_reference(int *x);
void swap(int *a, int *b);

int main(void) {
    int num = 10;

    printf("Original: %d\n", num);
    pass_by_value(num);
    printf("After pass by value: %d\n\n", num);

    pass_by_reference(&num);
    printf("After pass by reference: %d\n\n", num);

    int a = 5, b = 10;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}

void pass_by_value(int x) {
    x = 100;
    printf("Inside pass by value: %d\n", x);
}

void pass_by_reference(int *x) {
    *x = 100;
    printf("Inside pass by reference: %d\n", *x);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
