#include <stdio.h>
#include <stdlib.h>

void digits(int student_number){
    int *odd=malloc(sizeof(int));
    int *even=malloc(sizeof(int));
    int i=0,j=0;

    while(student_number!=0){
        int digit=student_number%10;
        if(digit%2==0){
            even=realloc(even,(i+1)*sizeof(int));
            even[i]=digit;
            i++;
        }else{
            odd=realloc(odd,(j+1)*sizeof(int));
            odd[j]=digit;
            j++;
        }
        student_number=student_number/10;
    }

    printf("ODDs: ");
    int k=0;
    for(k=0;k<j;k++){
        printf("%d",odd[k]);
    }

    printf("\n");
    printf("Evens: ");
    for(k=0;k<i;k++){
        printf("%d",even[k]);
    }

    free(odd);
    free(even);

}


int main(){
    int std;
    printf("Ogrenci numaranizi girin: ");
    scanf("%d", &std);

    digits(std);

    return 0;
}
