#include <stdio.h>

void print_binary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main(void) {
    unsigned int a = 60;
    unsigned int b = 13;

    printf("a = %u\n", a);
    print_binary(a);

    printf("\nb = %u\n", b);
    print_binary(b);

    printf("\na & b = %u\n", a & b);
    print_binary(a & b);

    printf("\na | b = %u\n", a | b);
    print_binary(a | b);

    printf("\na ^ b = %u\n", a ^ b);
    print_binary(a ^ b);

    printf("\n~a = %u\n", ~a);
    print_binary(~a);

    return 0;
}
