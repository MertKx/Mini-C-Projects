//this program finds max and 2nd max values inside array with 10 elements

#include<stdio.h>

int main(){
	int array[10];
	int i,max,max2;
	
	for(i=0;i<10;i++){
		printf("Please enter your arrays %d. value: " , i+1);
		scanf("%d" , &array[i]);
	}
	
	max=array[0];
	
	for(i=0;i<10;i++){
		if(array[i]>max){
			max=array[i];
		}
		if(array[i]>max2 && array[i]<max){
			max2=array[i];
		}
	}
	
	printf("Your maximum value is: %d" , max);
	printf("Your 2nd max is: %d" , max2);
	
	return 0;
}
