//This program does a countdown on the time which given by user.
#include<stdio.h>
#include<unistd.h>

int main (void) {
	int timer;
	
	printf("Please enter the time you want to do countdown (second): ");
	scanf("%d" , &timer);
	
	while(timer != 0){
		printf("You've %d seconds left!\n" , timer);
		timer--;
		sleep(1);
		system("cls");
	}
	
	printf("YOU'RE OUT OF TÝME :)");
	
	return 0;
}
