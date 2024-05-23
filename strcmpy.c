#include <stdio.h>
#include <string.h>

int main(){
    char str[40],str1[40];

    int var;

    strcpy(str, "abcdf");
    strcpy(str1, "ABCDF");

    var = strcmp(str,str1);

    if(var<0){
        printf("str less than str1");
    }else if(var>0){
        printf("str1 less than str");
    }else{
        printf("Strings are equal!");
    }

    return 0;
}
