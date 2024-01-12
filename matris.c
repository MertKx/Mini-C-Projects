#include <stdio.h>

void print(int array[][4] , int size){
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%d " , array[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int matris[3][4];
	int i,j;
	
	printf("Fill the matris. . .\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("matris[%d][%d]: " , i , j);
			scanf("%d" , &matris[i][j]);
		}
	}
	print(matris,3);
	return 0;
}
