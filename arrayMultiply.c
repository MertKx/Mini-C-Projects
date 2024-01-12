//this program multiplies all the elements of given array
#include <stdio.h>

int multiply(int array[] , int size){
	int carpim = 1;
	int i;
	for(i=0;i<size;i++){
		carpim *= array[i];
	}
	
	return carpim;
}

int main(){
	int array[5] = {1,2,3,4,5};
	
	printf("%d" , multiply(array,5));
}
