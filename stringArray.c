//this is my first string array project

#include <stdio.h>

int main(){
	char str1[] = "This is my first string.";
	
	puts(str1);
	
	printf("\n");
	
	printf("%s" , str1);
	printf("\n");
	printf("%50s" , str1);
	printf("\n");
	printf("%.10s" , str1);
	printf("\n");
	printf("%40.10s" , str1);
	
	char str2[80];
	gets(str2);
	printf("%s" , str2);
	
	return 0;
	
}
