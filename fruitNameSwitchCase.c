//this program shows fruit prices.

#include<stdio.h>

int main(void) {
	char fName,a,b;
	printf(" 'a' for apple.\n 'b' for banana.\n Please enter fruit name character that you want to see the price: ");
	scanf("%c" , &fName);
	
	switch(fName){
		case('a'): printf("Apple's price is 0.25$.\n");
			break;
		case('b'):printf("Banana's price is 0.45$.\n");
			break;
		default:printf("Invalid enterance, please try valid character!\n");
			break;
	}
	
	printf("Thanks for using this system, have a nice day. . .");
	
	return 0;
	
	
}
