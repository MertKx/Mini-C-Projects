#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    struct n * next;
};

typedef struct n node;

void bastir(node * r){
    while(r->next!=NULL){
            printf("%d" , r->x);
            r=r->next;
    }
}

void ekle(node * r, int x){
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=(node*)malloc(sizeof(node));
    r->next->x=15;
    r->next->next=NULL;
}

void ekleSirali(node * r, int x){
    if(r=NULL){
        r=(node*)malloc(sizeof(node));
        r->next=NULL;
        r->x=x;
    }

    if(r->x > x){
        node * temp=(node*)malloc(sizeof(node));
        temp->x=x;
        temp->next=r;
    }
    node *iter=r;
    while(iter->next!=NULL&&iter->next->x < x){
        iter=iter->next;
    }
    node * temp=(node*)malloc(sizeof(node));
    temp->next=iter->next;
    iter->next=temp;
    temp->x=x;
}


