#include <stdio.h>

int main(void) {
    unsigned int num = 8;

    printf("Original: %u (binary: 1000)\n", num);

    unsigned int left_shift = num << 1;
    printf("Left shift by 1: %u (binary: 10000)\n", left_shift);

    left_shift = num << 2;
    printf("Left shift by 2: %u (binary: 100000)\n", left_shift);

    unsigned int right_shift = num >> 1;
    printf("Right shift by 1: %u (binary: 100)\n", right_shift);

    right_shift = num >> 2;
    printf("Right shift by 2: %u (binary: 10)\n", right_shift);

    printf("\nMultiplication using shifts:\n");
    printf("%u * 2 = %u\n", num, num << 1);
    printf("%u * 4 = %u\n", num, num << 2);
    printf("%u * 8 = %u\n", num, num << 3);

    printf("\nDivision using shifts:\n");
    printf("%u / 2 = %u\n", num, num >> 1);
    printf("%u / 4 = %u\n", num, num >> 2);

    return 0;
}
