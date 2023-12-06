#include <stdio.h>

int main (void) {
	
	char operation;
	int num1,num2,res;
	
	printf("Choose your operation(+,-,*,/): ");
	scanf("%c", &operation);
	
	printf("Please enter first value: ");
	scanf("%d" , &num1);
	
	printf("Please enter second value: ");
	scanf("%d" , &num2);
	
	switch(operation){
		case '-':
			res=num1-num2;
			printf("Your result is: %d\n", res);
			break;
		case'+':
			res=num1+num2;
			printf("Your result is: %d\n", res);
			break;
		case'/':
			res=num1/num2;
			printf("Your result is: %d\n", res);
			break;
		case'*':
			res=num1*num2;
			printf("Your result is: %d\n", res);
			break;
		default:
			printf("Invalid Process!?");
			break;
			
	} 
	return 0;
} 
