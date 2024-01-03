//this program calculates area of three different geometrical shapes.

#include<stdio.h>

int main(void) {
	char shapeName;
	float length,width,radius,area;
	
	printf("Welcome to area calculator!\n");
	
	printf(" 'r' for rectangle. \n 't' for triangle. \n 'c' for circle. \n Please choose your shape: ");
	scanf("%c" , &shapeName);
	
	switch(shapeName){
		case('r'):{
			printf("Please enter your rectangles width: ");
			scanf("%f" , &width);
			
			printf("Well done! And please enter your rectangles length: ");
			scanf("%f" , &length);
			
			area = width * length;
			break;
		}
		
		case('t'):{
			printf("Please enter your triangles width: ");
			scanf("%f" , &width);
			
			printf("Well done! And please enter your triangles length: ");
			scanf("%f" , &length);
			
			area = (width * length)/2;
			break;
		}
		
		case('c'):{
			printf("Please enter your circles radius: ");
			scanf("%f" , &radius);
			
			area = 3.14 * radius * radius;
			break;
		}
		
		default: printf("You've entered wrong value please check your enterance...");	
	}
	
	
	printf("Calculation is done. \nYour area is %0.3f\n" , area);
	printf("Thanks for using calculator. . .");
		
	return 0;
		
}
