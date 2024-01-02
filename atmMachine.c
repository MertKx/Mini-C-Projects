//This program imiatates an atm machine using do-while loop

#include<stdio.h>

int main(void) {
	char D,W,E,op;
	
	
	printf(" D for deposit.\n W for withdraw \n E for exit. \n Please choose your operation: ");
	scanf("%c" , &op);
	
	do{
		printf("You're doing %c rightnow. Please wait . . ." , op);
	}while(op==D || op==W || op==E);
	
	return 0;
	
}
