#include <stdio.h>

int main (void) {
	int number,remain;
	printf("Please enter your number: ");
	scanf("%d" , &number);
	
	remain=0;
	
	remain = number%2;
	
	switch(remain){
		case 0: 
			printf("Your number is even.");
			break;
		case 1:
			printf("Your number is odd.");
			break;
		default:
			printf("Invalid value.");
	}
	return 0;	
}
