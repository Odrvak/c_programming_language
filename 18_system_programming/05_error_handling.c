#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int fd = open("nonexistent_file.txt", O_RDONLY);

    if (fd == -1) {
        printf("Error number: %d\n", errno);
        printf("Error message: %s\n", strerror(errno));
        perror("open");
    }

    FILE *fp = fopen("nonexistent.txt", "r");
    if (fp == NULL) {
        perror("fopen failed");
    }

    int result = remove("nonexistent_file.txt");
    if (result != 0) {
        fprintf(stderr, "Error removing file: %s\n", strerror(errno));
    }

    return 0;
}
