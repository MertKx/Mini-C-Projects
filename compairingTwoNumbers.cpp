/* This block compares two integers which gave from user. */
#include<stdio.h>

int main(void) {
	int num1,num2;
	printf("Enter the first: ");
	scanf("%d" , &num1);
	
	printf("Enter the second: ");
	scanf("%d" , &num2);
	
	if(num1>num2) printf("First one is the biggest.");
	else printf("Second one is the biggest.");
	
	return 0;
	
	
}
