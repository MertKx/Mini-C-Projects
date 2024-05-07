#include <stdio.h>

int main(){
    int n,o,m =10;
    int *z;

    z = &m;
    printf("Z stores address of m: %d\n", z);

    printf("*z stores value of m: %p\n", *z);

    printf("address of m: %d\n" , &m);

    printf("-----------------------------------\n");

    *z = 29;

    printf("Address of m: %d\n", &m);
    printf("Value of m: %d\n",m);

    int *ab;
    ab= &m;
    printf("Now ab assigned with the address of m\n");

    printf("Address of pointer ab: %d\n", ab);
    printf("Value of pointer ab: %d\n", *ab);

    printf("-----------------------------------\n");

    *ab = 34;
    printf("Pointer variable assigned to 34 now.\n");
    printf("Address of pointer ab: %d\n", ab);
    printf("Value of pointer ab: %d\n", *ab);

    *ab =7;
    printf("Pointer variable assigned to 7 now.\n");
    printf("Address of m: %d\n", &m);
    printf("Value of m: %d", m);

    return 0;
}
