#include <stdio.h>

#define FLAG_READ    0x01
#define FLAG_WRITE   0x02
#define FLAG_EXECUTE 0x04
#define FLAG_ADMIN   0x08

int main(void) {
    unsigned int permissions = 0;

    permissions |= FLAG_READ;
    printf("After adding READ: 0x%02X\n", permissions);

    permissions |= FLAG_WRITE;
    printf("After adding WRITE: 0x%02X\n", permissions);

    if (permissions & FLAG_READ) {
        printf("Has READ permission\n");
    }

    if (permissions & FLAG_EXECUTE) {
        printf("Has EXECUTE permission\n");
    } else {
        printf("Does NOT have EXECUTE permission\n");
    }

    permissions &= ~FLAG_WRITE;
    printf("After removing WRITE: 0x%02X\n", permissions);

    permissions ^= FLAG_ADMIN;
    printf("After toggling ADMIN: 0x%02X\n", permissions);

    permissions ^= FLAG_ADMIN;
    printf("After toggling ADMIN again: 0x%02X\n", permissions);

    return 0;
}
