#include <stdio.h>
void swap(int *first, int *second, int *third);
int main(){
    int first,second,third;

    printf("Input for 1st element: ");
    scanf("%d", &first);
    printf("Input for 2nd element: ");
    scanf("%d", &second);
    printf("Input for 3rd element: ");
    scanf("%d", &third);

    printf("Its time for swapping. . .\n");
    swap(&first,&second,&third);


    printf("first: %d, second: %d, third: %d", first, second,third);

    return 0;

}
void swap(int *first, int *second, int *third){
    int temp;
    temp = *second;
    *second = *first;
    *first = *third;
    *third = temp;
}
