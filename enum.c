#include <stdio.h>

enum bool{
    False = 0,
    True=1,
};

int main(){
    enum bool bool1,bool2;
    bool1 = 0;
    bool2 = True;

    if(bool1 ==False){
        printf("Bool1 is false.\n");
    }else{
        printf("Bool1 is true.\n");
    }

    if(bool2 == False){
        printf("Bool2 is false.");
    }else{
        printf("Bool2 is true.");
    }

    return 0;
}
