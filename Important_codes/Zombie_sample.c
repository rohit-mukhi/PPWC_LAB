#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int status;
    if(fork() == 0) {
        printf("I am child!\n");
        exit(0);
    } else {
        printf("I am parent!\n");
        sleep(3);
        wait(&status);
        if(WIFEXITED(status)) {
            printf("Child exited with status: %d\n", WEXITSTATUS(status));
        } else {
            printf("Child is still a zombie!\n");
        }
    }

    return 0;
}
