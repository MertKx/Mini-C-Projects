#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,*ptr,sum=0;

    printf("Enter size of elements: ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));

    if(ptr==NULL) printf("Memory couldnt allocated...");

    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }
    printf("Sum: %d",sum);

    free(ptr);

    return 0;
}
