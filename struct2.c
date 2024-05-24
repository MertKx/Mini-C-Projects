#include <stdio.h>

int main(){
    struct birthDate{
        int day;
        int month;
        int year;
    };

    struct personData{
        char name[40];
        int length;
        struct birthDate date;
    };

    struct personData person[3] = {
        {"Mert", 170, {17, 2, 1960}},
        {"Ramazan", 187, {11, 2, 2004}},
        {"Lutfu", 195, {17, 4, 1999}}
    };

    for(int i=0; i<3; i++){
        printf("Record no: %d\n", (i+1));
        printf("Name: %s\n", person[i].name);
        printf("Length: %d\n", person[i].length);
        printf("Birth date: %d/%d/%d\n\n", person[i].date.day, person[i].date.month, person[i].date.year);
    }

    return 0;
}
