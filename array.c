//These program takes 5 array values.
#include <stdio.h>
#define SIZE 5
int main(void) {
	double a[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++){
		printf("Enter values: ");
		scanf("\n%lf" , &a[i]);
		
	}
	
	return 0;
	
}
