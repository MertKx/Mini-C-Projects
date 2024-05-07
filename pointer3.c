#include <stdio.h>

int main(){
    int arr[4];
    int i;

    for(i=0;i<4;i++){
        printf("Address of arr[%d] = %d\n", i ,&arr[i]);
    }
    printf("Address of array: %d", arr+2);

    return 0;
}
