#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "file.h"

int open_file_rw(char *filename){
    int fd = open(filename, O_RDWR);
    if(fd == -1){
        perror("open");
        return fd;
    }

    return fd;
}

char* read_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("File opening failed");
        return NULL;
    }

    size_t size = 1024; // initial buffer size
    size_t len = 0;
    char *buffer = malloc(size);
    if (!buffer) {
        fclose(file);
        return NULL;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        buffer[len++] = (char)ch;
        printf("string buffer size %zu\n",sizeof(buffer) * len);
        
        // Resize buffer if needed
        if (len == size) {
            size += 200;
            char *temp = realloc(buffer, size);
            if (!temp) {
                free(buffer);
                fclose(file);
                return NULL;
            }
            buffer = temp;
            temp = NULL;
            printf("two strings %lu, %lu\n",sizeof(buffer), sizeof(temp));
        }
    }

    buffer[len] = '\0'; // null-terminate the string

    fclose(file);
    return buffer;
}