#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "file.h"
#include "common.h"


int create_db_file(char *filename) {
    printf("Attempting to seed data.\n");
    int fd = open(filename, O_RDONLY);
    if(fd != -1){
        close(fd);
        printf("File already exists\n");
        return STATUS_ERROR;
    }

    fd = open(filename, O_RDWR | O_CREAT, 0644);
    if(fd == -1){
        perror("open");
        printf("Bad file descriptor; check the filename provided\n");
        return STATUS_ERROR;
    }

    // if(write(fd, &seed, sizeof(seed)) != sizeof(seed)){
    //     printf("Failed to write seed data into file\n");
    //     close(fd);
    //     return STATUS_ERROR;
    // }

    return fd;
}

int open_db_file(char *filename) {
    int fd = open(filename, O_RDWR, 0644);
    if(fd == -1){
        perror("open");
        printf("Could not open file %s.\n", filename);
        return STATUS_ERROR;
    }

    return fd;
}


