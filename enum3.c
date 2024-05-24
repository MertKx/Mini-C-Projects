#include <stdio.h>

int main(){
    enum day{sunday=1,tuesday,wednesday,thursday,friday,saturday};
    enum day d;

    d= thursday;
    printf("The day number stored on d is %d", d);
    return 0;

}
