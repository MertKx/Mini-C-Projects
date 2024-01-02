//This software shows power of given numbers.
#include<stdio.h>

int main(void) {
	int number,power,result;
	result=1;
	
	printf("Please enter number: ");
	scanf("%d" , &number);
	
	printf("Please enter power: ");
	scanf("%d" , &power);
	
	while(power!=0) {
		result*=number;
		power--;
	}
	
	printf("Your result is: %d" , result);
	
	return 0;
	
}
