#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    argv[0] = "echo";
    if(fork() == 0) {
        execvp("echo", argv);
        exit(0);
    } else {
        execv("/bin/echo", argv);
    }
    return 0;
}
