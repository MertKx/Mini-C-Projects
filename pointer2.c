#include <stdio.h>

int main(){
    int *pc,c;

    c=22;
    printf("Real value of c: %d\n", c);
    printf("Address of c: %d\n", &c);

    pc = &c;
    printf("Address of pointer pc: %d\n", pc);
    printf("Value of pointer pc: %d\n" , *pc);

    c=11;
    printf("New value of c: %d\n", c);
    printf("New value of pointer: %d\n", *pc);

    *pc =2;
    printf("Changed c value by pointer: %d\n", c);
    printf("Changed pointer value: %d\n", *pc);
    printf("Address of value c: %d", &c);

    return 0;


}
