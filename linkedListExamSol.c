#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};

typedef struct node node;

void removeMid(node*r){
    node * iter;
    iter=r;
    int i=0;
    while(iter->next!=NULL){
        i++;
        iter=iter->next;
    }
    iter=r;
    int j=0;
    int mid =i/2;
    for(j=0;j<=mid-1;j++){
        iter=iter->next;
    }
    node * temp = (node*)malloc(sizeof(node));
    /*temp->next = iter->next->next;
    temp->x=iter->x;
    iter->next=temp;*/
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
}

int main(){
    removeMid(yourList);
}
