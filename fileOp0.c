#include <stdio.h>
#include <conio.h>

void main(){
    char ch;
    FILE *fp;
    fp = fopen("C:/Users/mertk/Desktop/out.txt", "r");
    while(!feof(fp)){
        ch = getc(fp);
        printf("\n%c",ch);
    }
    getch();
}
