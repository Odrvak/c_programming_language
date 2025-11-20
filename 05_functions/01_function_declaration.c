#include <stdio.h>

void greet(void);
int add(int a, int b);
float multiply(float x, float y);

int main(void) {
    greet();

    int sum = add(5, 3);
    printf("Sum: %d\n", sum);

    float product = multiply(2.5f, 4.0f);
    printf("Product: %.2f\n", product);

    return 0;
}

void greet(void) {
    printf("Hello from function!\n");
}

int add(int a, int b) {
    return a + b;
}

float multiply(float x, float y) {
    return x * y;
}
