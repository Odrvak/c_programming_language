#include <stdio.h>

int square(int n);
int max(int a, int b);
int is_even(int n);
char get_grade(int score);

int main(void) {
    int num = 5;
    printf("Square of %d: %d\n", num, square(num));

    int a = 15, b = 20;
    printf("Max of %d and %d: %d\n", a, b, max(a, b));

    int value = 8;
    if (is_even(value)) {
        printf("%d is even\n", value);
    } else {
        printf("%d is odd\n", value);
    }

    int score = 85;
    printf("Grade for %d: %c\n", score, get_grade(score));

    return 0;
}

int square(int n) {
    return n * n;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int is_even(int n) {
    return n % 2 == 0;
}

char get_grade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}
