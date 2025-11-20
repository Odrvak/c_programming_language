#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef enum {
    ERR_SUCCESS = 0,
    ERR_NULL_POINTER = 1,
    ERR_INVALID_ARGUMENT = 2,
    ERR_MEMORY_ALLOCATION = 3,
    ERR_FILE_OPERATION = 4
} ErrorCode;

ErrorCode divide_numbers(int a, int b, int *result) {
    if (result == NULL) {
        return ERR_NULL_POINTER;
    }

    if (b == 0) {
        return ERR_INVALID_ARGUMENT;
    }

    *result = a / b;
    return ERR_SUCCESS;
}

ErrorCode allocate_buffer(char **buffer, size_t size) {
    if (buffer == NULL || size == 0) {
        return ERR_INVALID_ARGUMENT;
    }

    *buffer = (char *)malloc(size);
    if (*buffer == NULL) {
        return ERR_MEMORY_ALLOCATION;
    }

    return ERR_SUCCESS;
}

const char* error_to_string(ErrorCode code) {
    switch (code) {
        case ERR_SUCCESS: return "Success";
        case ERR_NULL_POINTER: return "Null pointer error";
        case ERR_INVALID_ARGUMENT: return "Invalid argument";
        case ERR_MEMORY_ALLOCATION: return "Memory allocation failed";
        case ERR_FILE_OPERATION: return "File operation failed";
        default: return "Unknown error";
    }
}

int main(void) {
    int result;
    ErrorCode err;

    err = divide_numbers(10, 2, &result);
    if (err == ERR_SUCCESS) {
        printf("Division result: %d\n", result);
    } else {
        fprintf(stderr, "Error: %s\n", error_to_string(err));
    }

    err = divide_numbers(10, 0, &result);
    if (err != ERR_SUCCESS) {
        fprintf(stderr, "Error: %s\n", error_to_string(err));
    }

    char *buffer;
    err = allocate_buffer(&buffer, 100);
    if (err == ERR_SUCCESS) {
        printf("Buffer allocated successfully\n");
        free(buffer);
    } else {
        fprintf(stderr, "Error: %s\n", error_to_string(err));
    }

    return 0;
}
