#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    printf("strlen(str1): %zu\n", strlen(str1));

    strcpy(str3, str1);
    printf("After strcpy: str3 = %s\n", str3);

    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat: str1 = %s\n", str1);

    int cmp = strcmp("ABC", "ABC");
    printf("strcmp('ABC', 'ABC'): %d\n", cmp);

    cmp = strcmp("ABC", "XYZ");
    printf("strcmp('ABC', 'XYZ'): %d\n", cmp);

    char *pos = strchr(str1, 'W');
    if (pos != NULL) {
        printf("strchr found 'W' at position: %ld\n", pos - str1);
    }

    pos = strstr(str1, "World");
    if (pos != NULL) {
        printf("strstr found 'World' at position: %ld\n", pos - str1);
    }

    return 0;
}
