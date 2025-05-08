#include <stdio.h>

int main(){
    //smae size
    unsigned int x = 4;
    int sx = (int) (x);//type cast; issues could arise if outside of size scope where the value would just turn negative instead
    // downcasting
    unsigned int bigx = 0xfffffefe;
    short kindabig = (short)bigx;
    //upcasting
    short short2 = -1; //0xffff 1111
    int wasashortt = (int)short2; //expect 0x0000ffff 00001111 instead 0xffffffff

    // crosscasting
    float f = 3.14;
    int wasafloat = (int)f;

    (char *)
    (short *)

    short *mydata = (short*)argv[1];


    return 0;
}