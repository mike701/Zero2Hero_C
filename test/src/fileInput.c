#include <stdio.h>
#include "file.h"
#include "seed.h"


int main(int argc, char *argv[]) {
    int fd, sd;
    if(argc != 3){
        printf("Usage: %s <filename> <filename>\n", argv[0]);
        return 0;
    }
    fd = open_file_rw(argv[1]);
    sd = open_file_rw(argv[2]);
    if(fd == -1 | sd == -1)
        return -1;
    const char *filename = argv[2];
    char *seed_data = read_file(filename);
    if(seed_data){
        printf("Buffer read in value: %s\n", seed_data);
        seed_file(fd, seed_data);
        free(seed_data);
        seed_data = NULL;
    } else {
        printf("Failed to read in the file.");
        free(seed_data);
        seed_data = NULL;
    }
    
    return 0;
}