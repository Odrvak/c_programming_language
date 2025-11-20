#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signum) {
    printf("\nCaught signal %d\n", signum);
    if (signum == SIGINT) {
        printf("Interrupt signal received. Exiting...\n");
        exit(0);
    }
}

int main(void) {
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    printf("Process running. PID: %d\n", getpid());
    printf("Press Ctrl+C to send SIGINT\n");

    while (1) {
        printf("Running...\n");
        sleep(2);
    }

    return 0;
}
