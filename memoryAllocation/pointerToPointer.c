#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef enum {
    STATUS_GOOD,
    STATUS_BAD,
} status_t;

status_t foo (int **data, int len){

    int *temp = NULL;
    temp = realloc(*data, len);

    if(temp ==  NULL){
        *data = NULL;
        return STATUS_BAD;
    }

    *data = temp;
    return STATUS_GOOD;
}

int foo2(int **ptr) {
    int value = 10;
    *ptr = (int *)malloc(sizeof(int));  

    if (*ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    **ptr = value; 
    return 0;
}
int main () {
    // int i;
    // int *pi = &i;
    // int **ppi = &pi; //double pointer used to updated pointers outside of func scope

    // int *first = malloc(64);
    // if(STATUS_BAD == foo(&first, 128)){
    //     printf("Uh Oh\n");
    // }
    int *ptr;
    foo2(&ptr);
    printf("Value: %d,%d\n", *ptr, ptr);
    free(ptr);
    ptr = NULL;
    return 0;
}

