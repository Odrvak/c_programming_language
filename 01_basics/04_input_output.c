#include <stdio.h>

int main(void) {
    int integer;
    float floating;
    char character;
    char string[100];

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a float: ");
    scanf("%f", &floating);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a string: ");
    scanf("%s", string);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", integer);
    printf("Float: %.2f\n", floating);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    return 0;
}
