#ifndef SEED_H
#define SEED_H

struct dbtablecolumns_t {
    unsigned short firstname;
    unsigned short lastname;
    unsigned short email;
    unsigned short phonenumber;
};
int seed_file(int fd, char* seed);

#endif