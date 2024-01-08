//this program takes reverse of given array

#include <stdio.h>

int main (void){
	int i;
	int array[9] = {34 , 56, 54 , 32 , 67 , 89 , 90 , 32 , 21 };
	int revArray[9];
	
	//best practise
	for(i=8;i>=0;i--){
		printf("Reverse is: %d\n" , array[i]);
	}	
	
	//other way
	for(i=0;i<9;i++){
		revArray[i] = array[8-i];
	}
	
	for(i=0;i<9;i++){
		printf("Reverse Array[%d]= %d\n" , i , revArray[i]);
	}
	
	return 0;
}
