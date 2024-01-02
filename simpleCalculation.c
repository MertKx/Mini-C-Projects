//That software calculates 1+2+3+...+N
#include <stdio.h>

int main(void) {
	int n,number,result;
	
	printf("Welcome to calculator of 1+2+3+...N!\n");
	printf("Please enter N value: ");
	scanf("%d" , &n);
	
	number,result=0;
	
	while(number<=n){
		result+=number;
		number++;
	}
	
	printf("Your result is: %d" , result);
	
	return 0;
	
}
