#include <stdio.h>

int main(void){
    char str[6]="Hello";

    char *ptr = str;

    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
