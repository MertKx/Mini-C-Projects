//this program calculates the area of square
#include <stdio.h>

int square(int);

int main(){
	int dimension;
	
	printf("Please enter one dimension of your square: ");
	scanf("%d" , &dimension);
	
	printf("Here is your result: %d" , square(dimension));
	
	return 0;
}

int square(int x){
	int res;
	res = x*x;
	return res;	
}
