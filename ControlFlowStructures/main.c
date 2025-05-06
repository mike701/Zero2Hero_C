#include <stdio.h>
#define MAX_IDS 32
void conditionalStatements(){
    int temp;
    printf("What Temperature is it?\n");
    scanf("%d", &temp);
    if(temp >= 70){
        printf("Dang brother, its hot.\n");
    } else if (temp >= 30 && temp < 70){
        printf("Dang brother, its mild.\n");
    } else printf("Dang brother its cold.\n");
}
void loops(){
    int ids[MAX_IDS] = {0};
    // loop - do something over and over until some condition is met 
    // for, while, do while are all types of loops
    int i = 0;
    for(i = 0; i < MAX_IDS; i++){
        ids[i] = i*i;
        printf("%d:%d\n",i,ids[i]);
    }
    i = 0;
    while(i<MAX_IDS){
        ids[i] = i+i;
        printf("%d:%d\n",i,ids[i]);
        i++;
    }
    i = 0;
    do{
        ids[i] = i*i;
        printf("%d:%d\n",i,ids[i]);
        i++;
    }while(i<MAX_IDS);
}
int add(int x, int y){
    int z = x + y;
    return z;
}

int main(int argc, char *argv[]){
    // conditionalStatements();
    // loops();
    int res = add(1,2);
    printf("%d\n", res);
    return 0;
}
