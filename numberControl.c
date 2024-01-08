//this program checks if there is a reuse of number, if there is prints yes if not prints no

#include <stdio.h>

int main(void){
	int number,rem;
	int seen[10] = {0};
	
	printf("Please enter your number that u want to check: ");
	scanf("%d" , &number);
	
	while(number>0){
		rem=number%10;
		if(seen[rem]==1) 
			break;
		seen[rem] = 1;
		number = number/10;
	}
	
	if(number>0){
		printf("Yes");
	}else 
		printf("No");
	
	return 0;
	
}
