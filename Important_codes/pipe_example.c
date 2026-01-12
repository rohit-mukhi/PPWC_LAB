#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main() {
    int fd[2]; // You need to create an array of two places to store the read and write files
    char write_buffer[] = "Rohit is a genius!"; // This buffer is used to write the message 
    char read_buffer[100]; // This buffer is used to store the contents of write buffer to read buffer

    // pipe() function returns two files 0 for read and 1 for write
    if(pipe(fd) == -1) {
        perror("Pipe failed!");
        return 1;
    }
    
    if(fork() > 0) {
        close(fd[0]); // The parent process writes so it closes the read file
        write(fd[1], write_buffer, strlen(write_buffer)+1); // Contents of write buffer is written on pipe
        close(fd[1]); // The write pipe is closed
        wait(NULL);
    } else {
        close(fd[1]); // The child process reads so it closes the write pipe
        read(fd[0], read_buffer, sizeof(read_buffer)); // The contents of pipe is written on read_buffer
        printf("Received message: %s\n", read_buffer); // The read buffer is printed.
        close(fd[0]);
    }

    return 0;
}
