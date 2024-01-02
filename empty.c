#include<stdio.h>
int main(void) {
	int i, j;

for (i=1; i <= 10; i++){
	printf("i: %d: ",i);
	for (j=1; j <= 10; j++){
		printf("%5d", i*j);
  	} /* end-for-inner*/
  	printf("\n");
} /* end-for-outer*/

return 0;	
}

