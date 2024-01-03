//this program calculates area of three different geometrical shapes.

#include<stdio.h>

int main(void) {
	char shapeName,r,t,c;
	int lenght,width,radius,area;
	
	printf("Welcome to area calculator!\n");
	
	printf(" 'r' for rectangle. \n 't' for triangle. \n 'c' for circle. \n Please choose your shape: ");
	scanf("%c" , &shapeName);
	
	switch(shapeName){
		case('r'):{
			printf("Please enter your rectangles width: ");
			scanf("%d" , &width);
			
			printf("Well done! And please enter your rectangles lenght: ");
			scanf("%d" , &lenght);
			
			area = width * lenght;
			break;
		}
		
		case('t'):{
			printf("Please enter your triangles width: ");
			scanf("%d" , &width);
			
			printf("Well done! And please enter your triangles lenght: ");
			scanf("%d" , &lenght);
			
			area = (width * lenght)/2;
			break;
		}
		
		case('c'):{
			printf("Please enter your circles radius: ");
			scanf("%d" , &radius);
			
			area = 3 * radius * radius;
			break;
		}
		
		default: printf("You've entered wrong value please check your enterance...");	
	}
	
	
	printf("Calculation is done. \nYour area is %0.3d\n" , area);
	printf("Thanks for using calculator. . .");
		
	return 0;
		
}
