#include <stdio.h>

int main(int argc, char *argv[]){
    size_t;
    int x;
    char y: //1 bytte, 8 bits
    short s; //2 bytes, 16 bits
    int i; //4 bytes, 32 bits on 32 but systems butr can vary
    long long int l; //8 byte, 64 bit long * 2 = 32 * 2 

    unsigned int xx = -4; //invalid only signed variables can have all real numbers
    // signed variables (no unsigned in front) this means the first bit is used to decide positive or negative sign
    // this limits the amount of bits that can be used to represent numbers by taking away this space with unsigned
    // attribute you double the amount of positive values that can be represented
    //char: -128 -> 127 & 2**31 = 2147483648 -> 2147483647 versus unsigned char: 0 -> 255
    

    float f = 3.14;
    double d = 3.141549
    return 0;
}
