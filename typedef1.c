#include <stdio.h>

int main(){
    enum days {sunday=1,monday,tuesday,wednesday,thursday,friday,saturday};
    typedef enum days day;

    day day1,day2;

    day1=thursday;
    day2=friday;

    printf("Day1s number is: %d" , day1);
    printf("day2s number is: %d", day2);

    return 0;
}

