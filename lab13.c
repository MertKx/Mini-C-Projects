#include <stdio.h>
#include <stdlib.h>

struct person{
    int age;
    float weight;
    char name[30];
};

int main(){
    struct person *ptr;
    int i,n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    //Allocating memory for n numbers of person
    ptr = (struct person*) malloc(n * sizeof(struct person));

    for(i=0; i<n; ++i){
        printf("Enter first name and age respectively: ");
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }
    printf("Displaying Information:\n");
    for(i=0;i<n;++i)
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

    return 0;
}
