#include <stdio.h>
void add(int *p1,int *p2);
int main(){
    int first,second;
    printf("Input first number: ");
    scanf("%d", &first);
    printf("Input second number: ");
    scanf("%d", &second);
    add(&first, &second);

    return 0;
}
void add(int *p1,int *p2){
    int sum;
    sum = *p1 + *p2;

    printf("Sum of entered numbers: %d", sum);
}
