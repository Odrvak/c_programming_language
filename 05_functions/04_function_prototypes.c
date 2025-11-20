#include <stdio.h>

int calculate(int, int, char);
void display_result(int);

int main(void) {
    int result1 = calculate(10, 5, '+');
    display_result(result1);

    int result2 = calculate(10, 5, '*');
    display_result(result2);

    int result3 = calculate(10, 5, '-');
    display_result(result3);

    return 0;
}

int calculate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

void display_result(int result) {
    printf("Result: %d\n", result);
}
