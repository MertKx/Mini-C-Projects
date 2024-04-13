#include <stdio.h>

void add(int a , int b) {printf("Addition is %d\n", a+b);}
void substract(int a, int b){printf("Substraction is %d\n", a-b);}
void multiply(int a , int b){printf("Multiplication is %d\n" , a*b);}

int main(){
    void (*fun_ptr)(int,int);
    unsigned int ch, a=20, b=5;

    printf("Enter choice: ");
    scanf("%d", &ch);

    if(ch == 0) fun_ptr = add;
    else if (ch == 1) fun_ptr = substract;
    else if (ch == 2) fun_ptr = multiply;

    else {
        printf("Wrong choice\n");
        return 0;
    }
    fun_ptr(a,b);
    return 0;
}

