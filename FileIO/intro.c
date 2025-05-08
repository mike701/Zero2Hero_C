#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    /**
     * @brief All files are numbers in linux like below
     * 0 = stdin
     * 1 = stdout
     * 2 = stderr 
     * int fd = socket()
     */
    int fd = open("./file-that-doesnt-exist", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return -1;
    }
}