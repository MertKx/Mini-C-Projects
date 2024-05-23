#include <stdio.h>

int main(){
    int arr[5] = {1,4,3,2,5};

    int length = 5;
    for(int i=0;i<length;i++){
            for(int j=0;j<(length-1-i);j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
    }

    for(int i=0; i<length;i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
