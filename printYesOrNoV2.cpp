//This program writes yes if entered number between 2 and 5 otherwise writes no
#include <stdio.h>

int main(void) {
	int number;
	
	printf("Enter your number: ");
	scanf("%d" , &number);
	
	if(number>2 && number<5) printf("Yes!");
	else printf("No!");
	
	return 0;
	
}
