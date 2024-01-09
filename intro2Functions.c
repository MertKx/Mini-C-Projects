//this program is a introduction for using functions

#include <stdio.h>

int maximum(int x, int y, int z);

int main(void){
	int number1,number2,number3;
	
	printf("Enter three integers: ");
	scanf("%d%d%d" , &number1 , &number2 , &number3);
	
	printf("maximum is: %d\n" , maximum(number1 , number2 , number3));
	
	return 0;	
}

//definition of function

int maximum(int x, int y, int z){
	int max=x;
	
	if(y>max){
		max=y;
	}
	
	if(z>max){
		max=z;
	}
	
	return max;
	
}
