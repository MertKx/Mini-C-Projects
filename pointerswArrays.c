#include <stdio.h>

int main(){
    int arr[25], i ,n;

    printf("Input number of element you will enter: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Element - %d : ", i);
        scanf("%d", arr+i);

    }
    printf("Elements you've entered are: \n");
    for(i=0;i<n;i++){
        printf("element - %d : %d\n",i, *(arr+i));
    }

    return 0;
}
