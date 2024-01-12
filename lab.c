//ikincinin sonuna birincinin tersi 
#include <stdio.h>

int main(){
	char word1[100],word2[100];
	printf("1.Kelimeyi girin: ");
	gets(word1);
	printf("\n");
	printf("2.Kelimeyi girin: ");
	gets(word2);
	printf("\n");
	
	printf("%s" , word2);
	int i=0;
	while(word1[i]!='\0'){
		i++;
	}
	int ilkKelime = i;
	
	for(i=ilkKelime-1;i>=0;i--){
		printf("%c" , word1[i]);
	}
	
	
	
	return 0;
}
