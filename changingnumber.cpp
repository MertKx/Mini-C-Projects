#include<stdio.h>

int main() {
	printf("A sayisini giriniz: ");
	int A;
	scanf("%d", &A);
	
	printf("B sayisini giriniz: ");
	int B;
	scanf("%d", &B);
	
	int C;
	C = A;
	A = B;
	B = C;
	
	printf("A is %d\n" , A);
	printf("B is %d" , B);
	
	return 0;
}
