#include <stdio.h>
#include <unistd.h>

#include "common.h"
#include "seed.h"

int seed_file(int fd, char* seed){
    printf("Attempting to seed data.\n");
    if(fd == -1){
        printf("Bad file descriptor provided\n");
        return STATUS_ERROR;
    }

    if(write(fd, &seed, sizeof(seed)) != sizeof(seed)){
        printf("Failed to write seed data into file\n");
        return STATUS_ERROR;
    }

    return STATUS_SUCCESS;
}