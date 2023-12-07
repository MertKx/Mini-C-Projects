/*This code prints grade with using switch-case algorithm */
#include <stdio.h>

int main(void) {
	
	char gr;
	printf("Please enter your grade(1,2,3,4,5): ");
	scanf("%c" , &gr);
	
	switch(gr){
		case'5': 
			printf("Perfect!");
			break;
		case'4': 
			printf("Good!");
			break;
		case'3': 
			printf("Nice");
			break;
		case'2':
			printf("Not bad");
			break;
		case'1': 
			printf("Fail!");
			break;
		default: 
			printf("Invalid grade entrance");
	}
	
	return 0;
}
