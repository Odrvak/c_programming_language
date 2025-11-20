#include <stdio.h>

int is_power_of_two(unsigned int n) {
    return n && !(n & (n - 1));
}

int count_set_bits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

void swap_numbers(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

unsigned int reverse_bits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int main(void) {
    unsigned int num = 16;
    printf("%u is %sa power of two\n", num, is_power_of_two(num) ? "" : "not ");

    num = 15;
    printf("%u is %sa power of two\n", num, is_power_of_two(num) ? "" : "not ");

    num = 0b10110101;
    printf("\nNumber of set bits in %u: %d\n", num, count_set_bits(num));

    int a = 5, b = 10;
    printf("\nBefore swap: a=%d, b=%d\n", a, b);
    swap_numbers(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    num = 0x12345678;
    printf("\nOriginal: 0x%08X\n", num);
    printf("Reversed: 0x%08X\n", reverse_bits(num));

    return 0;
}
