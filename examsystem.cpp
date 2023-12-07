/*This code calculates students grade*/
#include <stdio.h>

int main() {
	printf("Enter student number: ");
	int no;
	scanf("%d", &no);
	
	printf("Enter visa test result: ");
	int v;
	scanf("%d" , &v);
	
	printf("Enter final test result: ");
	int f;
	scanf("%d" , &f);
	
	int res;
	res = (v*40/100) + (f*60/100);
	
	printf("For number of %d\n", no);
	printf("Your result: %d", res);
	
	return 0;
}
