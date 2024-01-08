//This program finds max element in array

#include <stdio.h>
#define Size 5

int main(void) {
	int i;
	double a[Size] = {1.4 , 5.7 , 6.8 , 8.4 , 9.1};
	double max;
	max=a[0];
	
	for(i=0;i<Size;i++){
		if(max<a[i]) max = a[i];
	}
	
	printf("Your max value: %0.2lf" , max);
	
	return 0;
	
	
}
