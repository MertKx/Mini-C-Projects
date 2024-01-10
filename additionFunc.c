//this program shows the addition function usage
#include <stdio.h>

int func(int,int);

int main(){
	int a,b;
	printf("Please enter your values: ");
	scanf("%d%d" , &a , &b);
	printf("here is the result: %d" , func(a,b));
	
	return 0;
}

int func(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
