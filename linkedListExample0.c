#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    struct n * next;
};

typedef struct n node;

void bastir(node * r){
    while(r!=NULL){
        printf("%d",r->x);
        r=r->next;
    }
}

int main(){
    node * root;
    root = (node*)malloc(sizeof(node));

    root->x = 10;
    root->next = (node*)malloc(sizeof(node));
    root->next->x=20;

    node * iter;
    iter=root;
    printf("%d\n", iter->x);
    iter=iter->next;

    //listenin sonuna node girilecek
    iter=root;
    int i=0;
    while(iter->next!=NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->x=15;
    iter->next->next=NULL;
}
