#include <stdio.h>

int main(void) {
    unsigned int value = 0xABCD1234;

    printf("Original value: 0x%08X\n", value);

    unsigned int lower_byte = value & 0xFF;
    printf("Lower byte: 0x%02X\n", lower_byte);

    unsigned int upper_byte = (value >> 24) & 0xFF;
    printf("Upper byte: 0x%02X\n", upper_byte);

    unsigned int middle_bytes = (value >> 8) & 0xFFFF;
    printf("Middle bytes: 0x%04X\n", middle_bytes);

    unsigned int cleared = value & ~0xFF00;
    printf("Clear bits 8-15: 0x%08X\n", cleared);

    unsigned int set = value | 0x00FF0000;
    printf("Set bits 16-23: 0x%08X\n", set);

    unsigned int toggled = value ^ 0x0000FF00;
    printf("Toggle bits 8-15: 0x%08X\n", toggled);

    return 0;
}
