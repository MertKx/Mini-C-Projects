//array

#include <stdio.h>

int main(){
	int x,i,id,idSum,number;
	idSum=0;
	
	printf("Please enter your student id: ");
	scanf("%d" , &id);
	for(i=0;i<10;i++){
		x=id%10;
		idSum += x;
		id= id/10;
	}
	
	int array[idSum];
	
	for(i=0;i<idSum;i++){
		printf("Please enter number: ");
		scanf("%d" , &number);
		if(number%3==0){
			array[i] = number;
		}else{
			array[(idSum-1)-i] = number;
		}
	}
	
	for(i=0;i<idSum;i++){
		printf(" %d" , array[i]);
	}
	
	return 0;
}
