//this program gives error code 402 if user enters negative number.
#include <stdio.h>

void error(int code){
	printf("Error code is %d" , code);
}

int main(){
	int number;
	printf("Enter positive number: ");
	scanf("%d" , &number);
	
	if(number>0)printf("Congratulations!");
	else{
		error(402);
	}
	
	return 0;
}
