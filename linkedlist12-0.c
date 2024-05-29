#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int no;
    int Grade;
    struct student * next;
};

typedef struct student node;
node *head, *newNode, *previousNode, *Highest;

/////////////////////sort by grade////////////////////////
void sort(){
    node* current = head;
    node* index = NULL;
    int temp1,temp2;
    if(head==NULL){
        //means empty
        return;
    }
    else{
        while(current!=NULL){
            index = current->next;
            //find min element
            while(index!=NULL){
                if(current->Grade>index->Grade){
                    temp1 = current->no;
                    temp2 = current->Grade;
                    current ->no = index->no;
                    current->Grade = index->Grade;
                    index ->no = temp1;
                    index->Grade = temp2;
                }
                index = index->next;

            }
            current = current ->next;
        }
    }
}

/////////////////////reverse list/////////////////////
void reverseLL(){
    node *prev,*nextN,*curr;
    prev = nextN = NULL;
    curr =head;
    if(head==NULL){
        printf("List is empty");
    }
    else{

        while(curr!=NULL){

            //reversing
            nextN = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nextN;
        }
        head = prev;
    }

}

int main(void){
    // her zamanki switch case ile secim ekrani sonra bitis\
}
