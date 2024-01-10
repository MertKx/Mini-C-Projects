//this program shows average grade and best grade of students

#include <stdio.h>

int main(){
	int ortalama,sum,i,j,max,enBasarili;
	
	int notlar [4][5] = {{1,67,76,55,0},{2,34,79,76,0},{3,56,68,57,0},{4,66,89,65,0}};
	
	for(i=0;i<4;i++){
		for(j=1;j<4;j++){
			sum += notlar[i][j];
		}
		ortalama = sum/3;
		notlar[i][4] = ortalama;
		sum=0;
	}
	
	//tablo yazdýrma
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d " , notlar[i][j]);
		}
		printf("\n");
	}
	
	//en yüksek alan
	max = notlar[1][4];
	enBasarili=1;
	for(i=0;i<4;i++){
		if(max<notlar[i][4]){
			max = notlar[i][4];
			enBasarili=i; //i+1 gerekiyor
		}
	}
	
	printf("En basarili ogrenci id: %d \nOrtalamasi: %d" , enBasarili , max);
	
	return 0;
}
