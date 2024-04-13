#include <stdio.h>

int main(){
    char str[6] = "Hello";

    char *ptr = str;

    for(int i=0; i<6; i++){
        printf("%c\n", *(ptr+i));
    }
    return 0;
}
