#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    int pipefd[2];
    pid_t pid;
    char write_msg[] = "Hello from parent!";
    char read_msg[100];

    if (pipe(pipefd) == -1) {
        perror("Pipe failed");
        exit(1);
    }

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid > 0) {
        close(pipefd[0]);
        write(pipefd[1], write_msg, strlen(write_msg) + 1);
        close(pipefd[1]);
    } else {
        close(pipefd[1]);
        read(pipefd[0], read_msg, sizeof(read_msg));
        printf("Child received: %s\n", read_msg);
        close(pipefd[0]);
    }

    return 0;
}
