#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* safe_string_duplicate(const char *source) {
    if (source == NULL) {
        return NULL;
    }

    size_t length = strlen(source);
    char *destination = (char *)malloc((length + 1) * sizeof(char));

    if (destination == NULL) {
        return NULL;
    }

    strncpy(destination, source, length);
    destination[length] = '\0';

    return destination;
}

int* create_array(int size) {
    if (size <= 0) {
        return NULL;
    }

    int *arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    return arr;
}

void safe_free(void **ptr) {
    if (ptr != NULL && *ptr != NULL) {
        free(*ptr);
        *ptr = NULL;
    }
}

int main(void) {
    char *str = safe_string_duplicate("Hello, World!");
    if (str != NULL) {
        printf("Duplicated string: %s\n", str);
        safe_free((void **)&str);
    }

    int *array = create_array(10);
    if (array != NULL) {
        for (int i = 0; i < 10; i++) {
            array[i] = i * 10;
        }
        printf("\nArray created and initialized\n");
        safe_free((void **)&array);
    }

    return 0;
}
