#include <stdio.h>

int main(){
    enum bool{
        false=0,
        true=1,
    };

    typedef enum bool bool;

    bool isTrue;

    isTrue = 0;

    if(isTrue == true){
        printf("Yep \n");
    }else{
        printf("Nope");
    }

    return 0;
}
