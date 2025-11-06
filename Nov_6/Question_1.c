#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
	pid_t childpid;
	childpid = fork();
	if(childpid == -1) {
		perror("Fork failed!");
		return 1;
	}

	if(childpid == 0) {
		printf("I am a child process: %ld with parent: %ld \n", (long) getpid(), (long) getppid());
	} else {
		printf("I am a child process: %ld with parent: %ld \n", (long) getpid(), (long) getppid());
	}

	return 0;
}
