#include <stdio.h>
#include <stdlib.h>

struct node{
    int x;
    struct node * next;
};

typedef struct node node;

int main(){
    int n,x;
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    node * r = (node*)malloc(sizeof(node));
    printf("Input data for node 0");
    scanf("%d",&x);
    r->x=x;
    r->next=NULL;

    node * temp;
    temp = r;
    for(int i=0;i<n-1;i++){
        temp->next=(node*)malloc(sizeof(node));
        printf("Input data for node %d",i+1);
        scanf("%d",&x);
        temp->next->x=x;
        temp->next->next=NULL;
    }

    printf("Lets print our values");

    for(int i=0;i<n;i++){

    }


}
