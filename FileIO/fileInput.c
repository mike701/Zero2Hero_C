// seed db with  fake db header data (non-ascii) echo -ne "\x01\x00\xff\x00\x08\x00\x00\x00" > ./my-db.db
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct database_header_t {
    unsigned short version;
    unsigned short employees;
    unsigned short filesize;
};

int main(int argc, char *argv[]) {
    struct database_header_t head = {0};

    if(argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if(fd == -1){
        perror("open");
        return -1;
    }

    if(read(fd, &head, sizeof(head)) != sizeof(head)){
        perror("read");
        close(fd);
        return -1;
    }

    printf("DB Version: %u\n", head.version);
    printf("DB Number of Employees: %u\n", head.employees);
    printf("DB File Length: %u\n", head.filesize);

    close(fd);
    return 0;
}