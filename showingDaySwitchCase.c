#include <stdio.h>

int main(void) {
	int day;
	printf("Please enter the number of day that u want to see(1-7): ");
	scanf("%d" , &day);
	
	switch(day){
		case 1: 
			printf("Monday");
			break;
		case 2: 
			printf("Tuesday");
			break;
		case 3: 
			printf("Wednesday");
			break;
		case 4: 
			printf("Thursday");
			break;
		case 5: 
			printf("Friday");
			break;
		case 6: 
			printf("Saturday");
			break;
		case 7: 
			printf("Sunday");
			break;
		default: 
			printf("You'we entered wrong value.");
	}	
	return 0;	
}
