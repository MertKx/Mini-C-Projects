#include <stdio.h>

enum sanfoundry{
    a,b,c
};

enum sanfoundry g;

int main(){
    g++;
    printf("%c",g);
    return 0;
}
