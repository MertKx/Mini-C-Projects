#include <stdio.h>

int main(){
    int i;
    for(i=0;i<=9;i++){
        printf( "%10d" , 1+rand()%6);
        if(i%3==0)printf("\n");

    }

    return 0;
}
