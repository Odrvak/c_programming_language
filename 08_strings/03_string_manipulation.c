#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_uppercase(char *str);
void to_lowercase(char *str);
void reverse_string(char *str);

int main(void) {
    char str1[50] = "Hello World";
    char str2[50] = "C PROGRAMMING";
    char str3[50] = "reverse";

    printf("Original: %s\n", str1);
    to_uppercase(str1);
    printf("Uppercase: %s\n\n", str1);

    printf("Original: %s\n", str2);
    to_lowercase(str2);
    printf("Lowercase: %s\n\n", str2);

    printf("Original: %s\n", str3);
    reverse_string(str3);
    printf("Reversed: %s\n", str3);

    return 0;
}

void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void to_lowercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
