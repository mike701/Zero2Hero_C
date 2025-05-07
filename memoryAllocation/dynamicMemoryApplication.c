#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 1000

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

    // struct employee_t employees[MAX_EMPLOYEES]
    // initialize_employee(&employees[0]);

    //This value came from the database header
    int n = 4;
    struct employee_t *employees = malloc(sizeof(struct employee_t)*4);

    if (employees == NULL){
        printf("The allocator failed\n");
        return -1;
    }
      
    initialize_employee(&employees[0]);

    printf("%d\n", employees[0].income);

    free(employees);
    employees = NULL;//to prevent usew after free exploits/errors
    return 0;
}