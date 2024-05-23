#include <stdio.h>
#include <string.h>

int main (){
    char src[40];
    char dest[80];

    strcpy(src,"This is source string sentence.");
    strcpy(dest,src);

    printf("This is final dest sentence of program: %s\n", dest);
    return 0;
}
