#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    strcpy(str, "This is my sentence.");

    int len=0;

    len=strlen(str);
    printf("Length of my sentence is: %d", len);

    getch();
    return 0;
}
