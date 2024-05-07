#include <stdio.h>
int printNum(int n);
int main(){
    int n=0;
    printf("First 50 numbers are: ");
    printNum(n);
    return 0;
}

int printNum(int n){
    if(n<=50){
        printf("%d\n",n);
        printNum(n+1);
    }
}

