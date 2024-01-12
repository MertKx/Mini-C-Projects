#include <stdio.h>

int uzunluk(char dizi[]){
	int i,uzunluk;
	for(i=0;dizi[i] != '\0' ; i++){
		uzunluk ++;
	}
	return uzunluk;
}

void tersCevir(char dizi[]){
	int i,gecici,uzun;
	uzun = uzunluk(dizi);
	
	for(i=0;i<uzun/2;i++){
		gecici = dizi[i];
		dizi[i]= dizi[uzun-1-i];
		
		dizi[uzun-1-i] = gecici;
	}
}


int main(){
	char text[200];
	scanf("%s" , text);
	
	tersCevir(text);
	
	printf("%s" , text);
	
	return 0;
}
