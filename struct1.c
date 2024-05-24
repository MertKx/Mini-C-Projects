#include <stdio.h>

int main(){
    struct{
        int year;
        int month;
        int day;
    } you,yourSister,yourBrother;

    printf("Enter your birthday ");
    printf(" in MM-DD-YYYY format>");

    scanf("%d-%d-%d", &you.month, &you.day, &you.year);

    printf("Enter your sisters birthday ");
    printf(" in MM-DD-YYYY format>");

    scanf("%d-%d-%d", &yourSister.month, &yourSister.day, &yourSister.year);

    printf("Enter your brothers birthday ");
    printf(" in MM-DD-YYYY format>");

    scanf("%d-%d-%d", &yourBrother.month, &yourBrother.day, &yourBrother.year);

    //printing
    printf("Your birth year is: %d \n Your sister birth year is: %d \n Your brothers birth year is: %d" , you.year , yourSister.year, yourBrother.year);

    return 0;

}
