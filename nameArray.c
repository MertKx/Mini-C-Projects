//string array example

#include <stdio.h>

int uzunlukDon(char name[]){
	int uzunluk=0;
	int i;
	for(i=0;name[i] != '\0'; i++){
		uzunluk++;
	}
	
	return uzunluk;
}

int main(){
	char isim[] = "Mert";
	printf("%d" , uzunlukDon(isim));
	return 0;
	
}
