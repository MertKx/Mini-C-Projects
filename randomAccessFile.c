#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fPointer;
    fPointer = fopen("C:/Users/mertk/Desktop/randomAccess.txt","w+");
    fputs("I ate 3 pumpkins today",fPointer);

    fseek(fPointer,7,SEEK_SET);
    //baslangictan(setten) basla 7 karakter gotur cursoru fPointer konumunda
    fputs(" munchkins on Friday",fPointer);

    fseek(fPointer,-6,SEEK_END);
    //sondan(endden) basla ve 6 adim geri gel
    fputs("Wednesday",fPointer);

    fclose(fPointer);
    return 0;
}
