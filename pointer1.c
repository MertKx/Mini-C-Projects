#include <stdio.h>
#include <stdlib.h>
int main(){
    int *pc,c;
    c=5;
    pc=&c;
    *pc=13;
    printf("pointer: %d",*pc);
    printf("real value: %d",c);

    return 0;

}
