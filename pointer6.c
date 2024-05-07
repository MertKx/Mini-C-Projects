#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr;

    ptr = &arr[2];

    printf("*ptr = %d\n" ,*ptr);
    printf("Address of ptr: %d\n" , ptr);
    printf("*(ptr+1) = %d\n", *(ptr+1));
    ptr = (ptr+1);
    printf("Address of new point: %d\n", ptr);
    printf("Address of ptr: %d\n" , ptr);
    printf("*(ptr-1) = %d\n", *(ptr-1));
    printf("Address of ptr: %d\n" , ptr);
    return 0;
}
