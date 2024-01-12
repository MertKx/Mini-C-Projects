//string kelime sayisi

#include <stdio.h>

int kelime(char array[]){
	int kelimeSayisi=0,i;
	for(i=0;array[i] != '\0';i++){
		if(array[i] == ' '){
			kelimeSayisi++;
		}
	}
	return kelimeSayisi;
}

int main(){
	char str[] = "Merhaba, nasılsınız efendim iyi misiniz?";
	printf( "%d" , kelime(str)+1);
	return 0;
	
}
