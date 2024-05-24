#include <stdio.h>

int main(){
    struct student{
        char firstName[60];
        char lastName[60];
        char id[60];
        int score;
    };

    typedef struct student student;
    student std1;

    //taking input from user
    printf("Enter your first name: ");
    scanf("%s" , std1.firstName);

    printf("Enter your last name: ");
    scanf("%s" , std1.lastName);

    printf("Enter your ID: ");
    scanf("%s" , std1.id);

    printf("Enter your score: ");
    scanf("%d" , &std1.score);

    //output
    printf("\n Student Detail \n");
    printf("First name: %s\n", std1.firstName);
    printf("Last name: %s\n", std1.lastName);
    printf("Student id: %s\n" , std1.id);
    printf("Score is: %d" , std1.score);

    return 0;
}
