#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[1024];
    int fd = open("File1.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    int fp = open("File2.txt", O_RDONLY);
    ssize_t lines = read(fp, buffer, sizeof(buffer));
    write(fd, buffer, lines);

    // Below is how you get all the flags associated to a fd
    int fl = fcntl(fd, F_GETFL);
    // Below is how you add another flag to the existing flags
    fcntl(fd, F_SETFL, fl | O_NONBLOCK);

    close(fd);
    close(fp);
    return 0;
}
