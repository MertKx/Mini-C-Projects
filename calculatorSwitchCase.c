#include <stdio.h>

int main(void) {
	char process;
	double num1,num2;
	
	printf("Please enter your first number: ");
	scanf("%lf" , &num1);
	
	printf("Please enter your second number: ");
	scanf("%lf" , &num2);
	
	printf("Please enter calculation process that you want to do(+,-,*,/): ");
	scanf(" %c" , &process);
	
	switch(process){
		case('+'): printf("Your result is: %0.3lf" , num1+num2);
			break;
		case('-'): printf("Your result is: %0.3lf" , num1-num2);
			break;
		case('*'): printf("Your result is: %0.3lf" , num1*num2);
			break;
		case('/'): printf("Your result is: %0.3lf" , num1/num2);
			break;
		default: printf("You'we entered wrong value.");
			break;
	}
	
	return 0;
}
