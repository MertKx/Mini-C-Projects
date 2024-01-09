//this program creates square function of numbers between 1-10

#include <stdio.h>

float square(float);

int main(){
	int i;
	for(i=0; i<=10;i++){
		printf("Number: %d , Square: %0.2f\n" , i , square(i));
	}
	return 0;	
}

float square(float x){
	return x*x;
}
