//this program checks the number is even or odd

#include<stdio.h>

int oddEven(int);
int num;

int main(){
	printf("Please enter your value: ");
	scanf("%d" , &num);
	
	printf("Ýf your number is even it'll be show 1 if not show 0: %d\n" , oddEven(num));
	
	return 0;
	
}

int oddEven(int sum){
	int res;
	if(num%2==0){
		res=1;
	}else res=0;
	
	return res;
}

