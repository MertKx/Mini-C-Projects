// this is rock-paper-scisssors game

#include <stdio.h>
#include <stdlib.h> // for random function
#include <time.h> // for creating random outputs using time

//random choice maker between 1-3
int choiceMaker(){
	srand(time(0)); //we use time for real random outputs
    int randomNum = rand() % 3 + 1; // creates random number between 1-3
    return randomNum;
}

int main() {
	char cpChoice,choice=0;
	int cmpWin,userWin,draw=0;
	//Starting point
	printf("Welcome to Rock-Paper-Scissors game !!!\n");
	printf("Let's begin :)\n");


	//game loop
	do {
		printf("Be careful! If you enter wrong value, computer wins ;)\n");
    	printf("Make your choice(1-Rock | 2-Paper | 3-Scissors | q-Quit): ");
    	scanf(" %c", &choice);
    	
    	cpChoice = choiceMaker(); //computer choice
    	
    	//converting char choice into int value for compairing process
    	int iChoice= choice - '0';
    	
    	//checking choices
    	if((iChoice == 2 && cpChoice == 1 ) || (iChoice == 3 && cpChoice == 2) \
		|| (iChoice == 1 && cpChoice == 3)){
    		printf("-----------\n");
			printf("You win!\n");
    		printf("-----------\n");
    		userWin++;
		}else if (iChoice == cpChoice){
			printf("--------\n");
			printf("Draw!\n");
			printf("--------\n");
			draw++;
		}else{
			printf("-----------------\n");
			printf("Computer wins!\n");
			printf("-----------------\n");
			cmpWin++;
		}
	} while(choice != 'q');
    
    
    //releasing scores
    printf(". . .Scores. . .\n");
    printf("You: %d\n", userWin);
    printf("Computer: %d\n", cmpWin);
    printf("Draw: %d\n", draw);
    
    if(userWin>cmpWin){
    	printf("Congratulations, you win with %d score !" , userWin-cmpWin);
	}else if(userWin == cmpWin){
		printf("Oh peace won the match!");
	}else{
		printf("Computer win with %d score! What a technology...", cmpWin-userWin);
	}
	
	
    return 0;
}

