#include <stdio.h>
#include <string.h>

int main(){
    char dest[50],src[50];

    strcpy(dest,"This is destination");
    strcpy(src,"This is source");

    strcat(dest,src);

    printf("Last version of sentence is: %s", dest);

    return 0;
}
