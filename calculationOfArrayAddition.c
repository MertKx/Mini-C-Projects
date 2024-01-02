//Calculation sum of two array

#include<stdio.h>

int main(void) {
	int arraySize,i;
	
	//FIRST ARRAY
	
	printf("Lets create array, please enter your arrays sizes: ");
	scanf("%d" , &arraySize);
	
	
	printf("Please enter your first arrays values. . .\n ");
	
	int array1[arraySize];
	
	for(i=0;i<arraySize;i++){
		printf("Please enter your arrays %d. element: " , i);
		scanf("%d" , &array1[i]);
	}
	
	//SECOND ARRAY
	
	printf("Lets create second array!\n");
	
	printf("Please enter your second arrays values. . .\n ");
	
	int array2[arraySize];
	
	for(i=0;i<arraySize;i++){
		printf("Please enter your arrays %d. element: " , i);
		scanf("%d" , &array2[i]);
	}
	
	// SUM OF TWO ARRAY
	
	printf("Lets calculate the sum of these two arrays. . . \n");
	
	int sumArray[arraySize];
	
	for(i=0;i<arraySize;i++){
		sumArray[i]=array1[i] + array2[i]; 
	}
	
	printf("Sum of these two array is: \n");
	
	for(i=0;i<arraySize;i++){
		printf(" - %d\n" , sumArray[i]);
	}
	
	return 0;
}
