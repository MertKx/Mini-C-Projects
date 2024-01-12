//addition of two numbers

#include <stdio.h>

int asalMi(int say){
	int i,sonuc;
	
	for(i=2;i < say;i++){
		if(say%i==0){
			return 0;
		}else{
			return 1;
		}
	}
}

int main(){
	int n;
	printf("Lutfen asalligini sorgulamak istediginiz sayiyi giriniz: ");
	scanf("%d" , &n);
	
	if(asalMi(n) == 1){
		printf("Sayi asal");
	}else{
		printf( "Asal degil");
	}
	
	return 0;
}
