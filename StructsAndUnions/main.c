#include <stdio.h>
#include <stdbool.h>
#define MAX_IDS 32
#define MAX_EMPLOYEES 100
// tedious
// int id0; 
// int id1=2;
// Better but not great
// int my_ids[MAX_IDS];
// float income;
// char name[64];
//Struct
// Save space when storing data on disk or sending across different systems using __attribute__((__packed__))
struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};
// Union
// union myunion_u {
//     int x;
//     char c;
//     short s;
// };

int main(){
    // Employee struct e.g.
    // struct employee_t Fred;
    // Fred.income = 100.00
    // Fred.ismanager = true;
    struct employee_t employees[MAX_EMPLOYEES];

    printf("Size of employee: %d\n", sizeof(struct employee_t));
    // int i = 0;
    // for(i= 0;i < MAX_EMPLOYEES; i++){
    //     employees[i].income = 0;
    //     employees[i].ismanager = false;
    // }

    // printf("income: %f\n", employees[10].inco me);
    // union myunion_u u;
    // u.x = 0x41424344;

    // printf("%hx %hhx\n", u.s, u.c);

    return 0;
}
