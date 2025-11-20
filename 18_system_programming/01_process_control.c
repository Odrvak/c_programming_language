#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        printf("Child process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        exit(0);
    } else {
        printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
        sleep(1);
    }

    return 0;
}
