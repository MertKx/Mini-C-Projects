#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char name[40];
    struct Employee *next;
};
    typedef struct Employee node;
    node *head,*newNode,*previous,*toDelete;

//////////////Search the list/////////////////
void search(char * searched){
    node *p;
    p = head;
    previous = head;
    while(p->next !=NULL){
        p = p->next;
      if(strcmp(p->name,searched)>=0)break;
         previous = p;
    }
}

/////////////////Add node/////////////////
void addNode(char * s){
    // create new node
    newNode = (node *)malloc(sizeof(node));
    strcpy(newNode->name,s);
    //find place for insertion
    search(newNode->name);
    //add it to the list
    newNode-> next=previous-> next;
    previous->next = newNode;
}

////////////////Delete Node/////////////

void deleteNode(char *s){
    search(s);
    toDelete = previous->next;
    if(!toDelete) printf("This name not in the list.");
    else if(strcmp(toDelete->name,s)==0){
        previous->next=toDelete->next;
        free(toDelete);
        printf("\n Deleted succesfully \n");
    }
    else printf("\n This name not in the list\n");
}

//////////////Traversing the list////////////////
void traverseList(void){
    node *p;
    p=head;
    p = p->next;
    while(p!=NULL){
        printf("%s\n", p->name);
        p = p->next;
    }
}

//////////////find longest record///////////////
void findLongest(void){
    node *p, * longest;
    p = head;
    p = p ->next;
    longest = p;
    while(p->next!=NULL){
        p = p->next;
        if(strlen(p->name)>=strlen(longest->name)){
            longest = p;
        }
    }
    printf("\n Longest record: %s Length: %d", longest->name,strlen(longest->name));
}

int main(void){
    int selection = 0;
    char s[40];
    head = (node*)malloc(sizeof(node));
    strcpy(head->name, "top of the list");
    head->next=NULL;
    do{
        printf("\n===========Names list=============\n");
        traverseList();
        printf("\n=============End of the list===========\n");
        printf("\n==============press any key to continue to main menu============\n");
        getch();
        printf("\n\n*****************Main Menu************\n");
        printf("\nChoose option from the following list...\n");
        printf("\n================================================\n");

        printf("1.Add name\n 2.Delete name \n 3.find the longest name \n 4.exit");
        scanf("%d", &selection);

        switch(selection){
            case 1: printf("\n\n*************Add node**************\n");
                    printf("Enter name: "); scanf("%s",s);
                    addNode(s); break;
            case 2: printf("\n\n**************Delete node***********\n");
                    printf("Enter name to be deleted: "); scanf("%s",s);
                    deleteNode(s);break;
            case 3: printf("\n\n***************find longest name*****************\n");
                    FindLongest();break;
            case 4: exit(0);
        }
    }while(1);
}
