/* This program calculates area of triangle which diamensions given by user */
#include <stdio.h>

int main(void) {
	int floorLenght;
	int height;
	int area;
	
	printf("Please enter floor lenght of triangle: ");
	scanf("%d" , &floorLenght);
	
	printf("Please enter height of triangle: ");
	scanf("%d" , &height);
	
	area = (floorLenght*height)/2;
	
	printf("Your triangles area is: %d" , area);
	
	return 0;
	
}
