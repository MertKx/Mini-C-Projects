#include <stdio.h>

int main(){
	int array[4][3];
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("Array[%d][%d]. elemani: " , i , j);
			scanf("%d" , &array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d " , array[i][j]);
		}
		printf("%d\n");
	}
	return 0;
	
}
