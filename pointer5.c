#include <stdio.h>

int main(){
    int i,arr[6],sum=0;

    printf("Enter 6 numbers: ");

    for(i=0;i<6;i++){
        scanf("%d", &arr[i]); // equals arr+i

        sum += *(arr+i);
    }

    printf("Sum= %d",sum);

    return 0;
}
