//this program shows how to use srand function

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int seed;

    printf("Please enter your random seed: ");
    scanf("%u", &seed);

    srand(seed);

    unsigned int i;
    for(i=1;i<=12;i++){
        printf("%10d", 1+rand()%6);
        if(i%4==0)printf("\n");
    }
}
