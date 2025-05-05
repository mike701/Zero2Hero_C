#include <stdio.h>
#define MAX_PERSONS 1024
#define DEBUG

int main(){
    #ifdef DEBUG
    printf("WE ARE IN DEBUG MODE: %s:%d\n", __FILE__, __LINE__);
    #endif

    printf("253\n");
    printf("%d\n",253);
    return 0;
}