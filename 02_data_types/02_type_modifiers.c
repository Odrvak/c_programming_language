#include <stdio.h>

int main(void) {
    short int si = 32767;
    long int li = 2147483647L;
    long long int lli = 9223372036854775807LL;

    unsigned int ui = 4294967295U;
    unsigned long ul = 4294967295UL;

    signed int positive = 100;
    signed int negative = -100;

    printf("short int: %d (size: %zu bytes)\n", si, sizeof(short int));
    printf("long int: %ld (size: %zu bytes)\n", li, sizeof(long int));
    printf("long long int: %lld (size: %zu bytes)\n", lli, sizeof(long long int));
    printf("unsigned int: %u (size: %zu bytes)\n", ui, sizeof(unsigned int));
    printf("unsigned long: %lu (size: %zu bytes)\n", ul, sizeof(unsigned long));
    printf("signed positive: %d, negative: %d\n", positive, negative);

    return 0;
}
