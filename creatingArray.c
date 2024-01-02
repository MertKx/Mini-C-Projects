//this program creates a array with user choices and shows it

#include<stdio.h>

int main(void) {
	int arraySize,i;
	
	printf("Enter your array size: ");
	scanf("%d" , &arraySize);
	
	int array[arraySize];
	
	for(i=0;i<arraySize;i++){
		printf("Please enter %d . array element: ", i);
		scanf("%d" , &array[i]);
	}
	
	printf("--------------------\n");
	printf("Lets see the array \n");
	printf("--------------------\n");
	
	for(i=0;i<arraySize;i++){
		printf("Your arrays %d . element is %d \n" , i , array[i]);
	}
	
	return 0;
}
