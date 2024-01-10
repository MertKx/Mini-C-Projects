//this program calculates the given number is prime(0) number or armstrong(1) number

#include <stdio.h>

int armstrongOrPrime(int);
int exp(int);
int num;

int main(){
	printf("Welcome to calculating prime or armstrong calculator. . . \n");
	printf("Enter your value: ");
	scanf("%d" , &num);
	
	printf("Here is your result(0 = prime)(1 = armstrong): %d" , armstrongOrPrime(num));
	
	return 0;
}

int armstrongOrPrime(int num){
	int rem,funcResult,sum = 0;
	int temp = num;
	int temp2 = num;
	int basamak;
	basamak =0;
	
	//calculation of armstrong
	while(temp>0){
		temp = temp /10;
		basamak++;
	}
	while(temp2>0){
		rem = temp2%10;
		sum += exp(rem);
		temp2 = temp2 /10;
	}
	
	
	if(sum == num) funcResult = 1;
	else{
		int i;
		for(i=2;i<num;i++){
			if(num%i == 0) {
				funcResult=0;	
			}
		}
	}
	
	
	//calculation of prime
	/*int i;
	for(i=2;i<num;i++){
		if(num%i == 0) funcResult=0;
	}*/
	


	return funcResult;
}

int exp(int basamak){
	int res,i;
	res=1;
	for(i=1;i<=basamak;i++){
		res *= basamak;
	}
	return res;
}

