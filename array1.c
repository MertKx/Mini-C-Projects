//this program writes values of array
#include <stdio.h>
#define Size 5

int main (void) {
	int i;
	
	double array[Size] = {1.2 , 2.4 , 5.8 , 6.4 , 4.1};
	
	for(i=0;i<Size;i++){
		printf("array[%d] = %0.2lf\n" , i ,array[i]);
	}
	
	return 0;
	
	
}
