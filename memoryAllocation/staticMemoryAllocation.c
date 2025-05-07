#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 1000

// scary to do could have data race conditions when multi-threading
// int g_numEmployees = 0;

struct employee_t {
    int id;
    int income;
    bool staff;
};

int initialize_employee(struct employee_t *e){
    static int numEmployees = 0;
    numEmployees++;
     
    e->id = numEmployees;
    e-> income = 0;
    e->staff = false;
    return numEmployees;
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
      
    for(int i = 0; i<n; i++){
        int id = initialize_employee(&employees[i]);
        printf("New Employee, ID is %d\n", id);
    }

    free(employees);
    employees = NULL;//to prevent use after free exploits/errors
    return 0;
}