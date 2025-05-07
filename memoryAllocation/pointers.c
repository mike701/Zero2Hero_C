#include <stdio.h>
#include <stdbool.h>


struct employee_t {
    int id;
    int income;
    bool staff;
};

void initialize_employee(struct employee_t *e){
    e->id = 0;
    e-> income = 0;
    e->staff = false;
    return;
}

int main () {
    // int x = 3;
    // int *pX = &x;
    
    // printf("%d\n", *pX);
    // printf("%p\n", pX);

    struct employee_t Ralph;
    initialize_employee(&Ralph);

    printf("%d\n", Ralph.income);

    // int x = 3;
    // int *pX = &x;
    // printf("%d\n", *pX);
    // // 3
    // *pX = 4;
    // printf("%d, %d\n", *pX, x);
    // // 4

    int x = 3;
    int *pX = &x;
    int y = 5;
    int *pY = &y;

    int temp;
    temp = *pX;
    *pX = *pY;
    *pY = temp;
    printf("%p\n%p\n%d\n", *pX, *pY, temp);
    return 0;
}