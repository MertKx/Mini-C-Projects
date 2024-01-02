//finding biggest element in array

#include<stdio.h>

int main(void) {
	int arraySize,i,max;
	
	printf("Enter your array size: ");
	scanf("%d" , &arraySize);
	
	int array[arraySize];
	
	for(i=0;i<arraySize;i++) {
		printf("Enter your arrays %d . element.", i);
		scanf("%d" , &array[i]);
	}
	
	printf("Lets find the biggest one.\n");
	
	max=array[0];
	for(i=0;i<arraySize;i++) {
		if(array[i]>max) max=array[i];
	}
	
	printf("Your arrays biggest element is: %d" , max);
	
	return 0;
	
}
