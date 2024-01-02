//This program shows all divisors of given number

int main(void) {
	int n,number;
	
	printf("Enter number you want to see all divisors: ");
	scanf("%d" , &number);
	n=number;
	
	while(n!=0){
		if(number%n == 0) printf("%d is a divisor.\n" , n);
		n--;
	}
	
	return 0;
	
}
