/*Finding biggest number inside of 3*/
#include <stdio.h>

int main(void) {
	int num1,num2,num3,big;
	
	printf("Enter your first number: ");
	scanf("%d" , &num1);
	
	printf("Enter your second number: ");
	scanf("%d" , &num2);
	
	printf("Enter your third number: ");
	scanf("%d" , &num3);
	
	big = num1;
	
	if(num2>big) big=num2;
	if(num3>big) big=num3;
	
	printf("Biggest is: %d\n" , big);
	
	return 0;
	
}
