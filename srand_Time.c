//this program generates random number every each time

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Welcome!\n");

    srand(time(NULL));
    unsigned int i;
    for(i+0;i<6;i++){
        printf("%d",1+rand()%6);
        if(i%2==0)printf("\n");
    }

    return 0;
}
