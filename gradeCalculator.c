//This software calculates final grade for three different lectures.

#include<stdio.h>

int main(void) {
	char lectureType;
	float finalGrade,midterm,hworks,grade;
	
	printf("Welcome to grade calculator.\n ['p' for physics.]\n ['m' for math.]\n ['c' for chemistry.]\n Let's start with choosing lecture type: ");
	scanf("%c" , &lectureType);
	
	switch(lectureType){
		case('p'):{
			printf("For physics we'll use 25%% of midterm, 55%% of final and 20%% of homework grades.\n");
			
			printf("Please enter your homework grade: ");
			scanf("%f" , &hworks);
			
			printf("Please enter your midterm grade: ");
			scanf("%f" , &midterm);
			
			printf("Please enter your final grade: ");
			scanf("%f" , &finalGrade);
			
			grade = (midterm*0.25) + (hworks*0.2) + (finalGrade*0.5);
			
			printf("Your final grade for physics is %0.2f\n" , grade); 
			
			break;
		}
		
		case('c'):{
			printf("For chemistry we'll use 40%% of midterm, 40%% of final and 20%% of homework grades.\n");
			
			printf("Please enter your homework grade: ");
			scanf("%f" , &hworks);
			
			printf("Please enter your midterm grade: ");
			scanf("%f" , &midterm);
			
			printf("Please enter your final grade: ");
			scanf("%f" , &finalGrade);
			
			grade = (midterm*0.4) + (hworks*0.2) + (finalGrade*0.4);
			
			printf("Your final grade for chemistry is %0.2f\n" , grade); 
			
			break;
		}
		
		case('m'):{
			printf("For mathematics we'll use 30%% of midterm, 50%% of final and 20%% of homework grades.\n");
			
			printf("Please enter your homework grade: ");
			scanf("%f" , &hworks);
			
			printf("Please enter your midterm grade: ");
			scanf("%f" , &midterm);
			
			printf("Please enter your final grade: ");
			scanf("%f" , &finalGrade);
			
			grade = (midterm*0.3) + (hworks*0.2) + (finalGrade*0.5);
			
			printf("Your final grade for mathematics is %0.2f\n" , grade); 
			
			break;
		}
		default: printf("Wrong lecture type entrance. Please try again.\n");
	}
	
	printf("Thanks for using our calculator. Have a nice day . . .");	

	return 0;
}
