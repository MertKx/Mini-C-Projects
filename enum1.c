#include <stdio.h>

int main(){
    enum mainColors{
        Red,
        Blue,
        Yellow
    };

    enum mainColors pixel;
    pixel = Blue;

    if(pixel == Red){
        printf("Red pixel");
    }else if(pixel == Blue){
        printf("Blue pixel");
    }else{
        printf("Yellow pixel");
    }

    return 0;
}
