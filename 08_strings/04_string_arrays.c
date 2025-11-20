#include <stdio.h>

int main(void) {
    char *fruits[] = {
        "Apple",
        "Banana",
        "Cherry",
        "Date",
        "Elderberry"
    };

    int count = sizeof(fruits) / sizeof(fruits[0]);

    printf("Fruits:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, fruits[i]);
    }

    char names[3][20] = {
        "Alice",
        "Bob",
        "Charlie"
    };

    printf("\nNames:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
