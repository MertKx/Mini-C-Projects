#include <stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Please enter last value: ");
    scanf("%d", &n);

    printf("%d",sum(n));

    return 0;
}

int sum(int n){
    int sumN=0;
    if(n == 0){
        return sumN;
    }else{
        sumN = n + sum(n-1);
    }
    return sumN;
}
