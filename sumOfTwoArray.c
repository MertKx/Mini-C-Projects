//This program multiplies two array

#include <stdio.h>

int main(void) {
	int N;
	
	printf("Enter the lenght or arrays: ");
	scanf("%d" , &N);
	
	int i , A[N] , B[N] , Sum[N];
	
	for(i=0;i<N;i++){
		printf("Enter values: ");
		scanf("%d" , &A[i]);
	}
	
	for(i=0;i<N;i++){
		printf("Enter values: ");
		scanf("%d" , &B[i]);
	}
	
	for(i=0;i<N;i++){
		Sum[i] = A[i] + B[i];
		printf("Sum[%d] = %d\n" , i , Sum[i]);
	}
	
	return 0;
	
}
