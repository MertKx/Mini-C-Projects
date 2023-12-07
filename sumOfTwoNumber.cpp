/* This program calculates sum of two numbers which given by user */
#include<stdio.h>

int main() {
	printf("Enter the first number: ");
	int a;
	scanf("%d" , &a);
	
	printf("Enter the second number: ");
	int b;
	scanf("%d" , &b);
	
	int sum;
	sum = a + b;
	printf("Your sum is: %d", sum);
	
	return 0;
}
