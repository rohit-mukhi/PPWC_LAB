#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    printf("=== PARENT (PID= %d): Starting ===\n\n", getpid());
    pid_t pid1 = fork();
    if(pid1 == 0) {
        // Child
        printf("CHILD 1 (PID= %d, PPID= %d) starting\n", getpid(), getppid());
        sleep(2);
        printf("CHILD 1 (PID= %d) finishing\n", getpid());
        exit(10);
    }
    
    pid_t pid2 = fork();
    if(pid2 ==0) {
        //CHILD 2
        printf("CHILD 2 (PID= %d, PPID= %d) starting\n", getpid(), getppid());
        sleep(1);
        printf("CHILD 2 (PID= %d) finishing\n", getpid());
        exit(20);
    }

    printf("\nPARENT waiting specifically for child 2 (PID= %d)...\n", pid2);
    int status;
    pid_t result = waitpid(pid2, &status, 0);

    if(result ==pid2) {
        printf("PARENT: CHILD 2 (PID= %d) finished\n", result);
        printf("Exit status: %d\n", WEXITSTATUS(status));
    }

    printf("\nParent now waiting for child 1 (PID= %d)...\n", pid1);
    result = waitpid(pid1, &status, 0);

    if(result == pid1) {
        printf("PARENT: CHILD 1 (PID= %d) finished!\n", result);
        printf("Exit status: %d\n", WEXITSTATUS(status));
    }

    printf("\n=== Parent: ALL children done ===\n");
    return 0;
}
