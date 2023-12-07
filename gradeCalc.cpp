/*This code takes the grade from user and gives a respond for that grade to the user. */
#include <stdio.h>

int main(void) {
	int gr;
	printf("Enter the grade: ");
	scanf("%d" , &gr);
	
	if(gr==5) printf("Perfect !");
	else if (gr==4) printf("Good!");
	else if (gr==3) printf("Not Bad!");
	else if (gr==2) printf("Not Good");
	else if (gr==1) printf("Failed!");
	else printf("Invalid grade");
	
	return 0;
	
}
