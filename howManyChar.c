//harfin kac kez gectigini bulur

int howMany(char str[]){
	char karakter = 'a';
	int i,times=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==karakter){
			times++;
		}
	}
	return times;
}

int main(){
	char str[] = "Merhaba, nasılsınız?";
	char karakter = 'a';
	printf("Cumlenizde %c karakteri %d kez geciyor." , karakter , howMany(str));
	return 0;
}
