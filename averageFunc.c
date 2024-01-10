//this program takes average of 5 numbers using functions

#include<stdio.h>

int avg(int, int , int , int , int);
int n0,n1,n2,n3,n4;

int main(){
	printf("Please enter 5 value for taking average: ");
	scanf("%d%d%d%d%d" , &n0, &n1 , &n2 , &n3 , &n4);	
	
	printf("Here is your result: %d" , avg(n0,n1,n2,n3,n4));
	
	return 0;
}

int avg(int n0,int n1,int n2,int n3,int n4){
	int avg;
	avg = (n0+n1+n2+n3+n4)/5;
	
	return avg;
	
}
