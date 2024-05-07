#include <stdio.h>

int sumDigits(int n);

int main(){
    int n = 0;
    printf("Enter value: ");
    scanf("%d", &n);

    printf("%d", sumDigits(n));
    return 0;
}

int sumDigits(int n){
    int sum = 0;
    if (n != 0){
        sum += n % 10;
        return sum + sumDigits(n / 10);
    }
    return sum;
}
