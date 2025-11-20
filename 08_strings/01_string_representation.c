#include <stdio.h>

int main(void) {
    char str1[] = "Hello";
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
    char *str3 = "C Programming";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    printf("\nCharacter by character (str1):\n");
    for (int i = 0; str1[i] != '\0'; i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");

    printf("\nString sizes:\n");
    printf("sizeof(str1): %zu\n", sizeof(str1));
    printf("sizeof(str2): %zu\n", sizeof(str2));
    printf("sizeof(str3): %zu\n", sizeof(str3));

    return 0;
}
