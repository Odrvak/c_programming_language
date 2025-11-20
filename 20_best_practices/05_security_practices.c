#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unsafe_string_copy(void) {
    char buffer[10];
    char *input = "This is a very long string that will overflow";
    strcpy(buffer, input);
}

void safe_string_copy(void) {
    char buffer[10];
    char *input = "This is a very long string";
    strncpy(buffer, input, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Safe copy: %s\n", buffer);
}

void unsafe_format_string(char *user_input) {
    printf(user_input);
}

void safe_format_string(char *user_input) {
    printf("%s", user_input);
}

int safe_integer_input(int *value) {
    char buffer[32];
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 0;
    }

    char *endptr;
    long result = strtol(buffer, &endptr, 10);

    if (endptr == buffer || *endptr != '\n') {
        return 0;
    }

    *value = (int)result;
    return 1;
}

void secure_memory_clear(void *ptr, size_t size) {
    volatile unsigned char *p = ptr;
    while (size--) {
        *p++ = 0;
    }
}

int main(void) {
    printf("Demonstrating safe practices:\n\n");

    safe_string_copy();

    char input[] = "User input text";
    safe_format_string(input);

    printf("\nEnter an integer: ");
    int value;
    if (safe_integer_input(&value)) {
        printf("You entered: %d\n", value);
    } else {
        printf("Invalid input\n");
    }

    char sensitive_data[32] = "password123";
    printf("\nClearing sensitive data...\n");
    secure_memory_clear(sensitive_data, sizeof(sensitive_data));

    return 0;
}
