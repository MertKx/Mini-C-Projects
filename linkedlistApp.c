#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int no;
    char name[40];
    int midterm,finalterm;
    struct student * next;
};

typedef struct student node;
node *head, *newNode, *previousNode, *Highest;


///////////////create list///////////////
void createstudentList(){
    int n,k;
    printf("How many student in the list?");
    scanf("%d", n);
    for(k=0;k<n;k++){
        if(k==0){//adding first node
            newNode = (node *)malloc(sizeof(node));
            head = newNode;
        }
        else{
            newNode->next = (node*)malloc(sizeof(node));
            newNode = newNode->next;
        }
        printf("\n**************Insert Record no: %d*************\n",k+1);
        printf("\nStudent ID: ");scanf("%d",&newNode->no);
        printf("\nStuden Name: ");scanf("%s",newNode->name);
        printf("\nStudent Midterm: ");scanf("%d",&newNode->midterm);
        printf("\nStudent Finalterm: ");scanf("%d",&newNode->finalterm);
        printf("\n*************************************\n");

    }
    newNode->next = NULL;
}

/////////////////////////Listing the students///////////////////////
void studentList(){
    double TotalGrade=0;
    int counter =1;
    node *p;
    p = head;

    while(p!=NULL){
        printf("\n***************Record NO: %d**********\n",counter);
        printf("\nStudent id: %d\t", p->no);
        printf("\nStudent name: %s\t",p->name);
        printf("\nStudent midterm: %d\t",p->midterm);
        printf("\nStudent finalterm: %d\t",p->finalterm);
        TotalGrade = p->midterm*0.4+p->finalterm*0.6;
        printf("Total grade: %.2f \t", TotalGrade);

        p=p->next;
        counter++;
    }
}

/////////////////////////Add student///////////////////////////
void addStudent(){
    int stdNo;
    node *p,*q;
    newNode = (node*)malloc(sizeof(node));
    printf("Enter new student number : ");scanf("%d",&newNode->no);
    printf("Enter new student name: ");scanf("%d",&newNode->name);
    printf("Enter new student midterm: ");scanf("%d",&newNode->midterm);
    printf("Enter new student final: ");scanf("%d",&newNode->final);

    printf("Enter student number that new record will be added before: \n");
    printf("press 0 for add to end of list...\n");
    scanf("%d",&stdNo);

    p=head;
    if(p->no == stdNo){
        //add beginning
        newNode->next = p;
        head = newNode;
    }else{
        while(p->next!=NULL && p->no!=stdNo){
            q=p;
            p = p->next;
        }
        if(p->no == stdNO){
            //adding nor beginning and end
            q->next = newNode;
            newNode->next = p;
        }else if(p->next ==NULL){
            //add to end
            p->next = newNode;
            newNode->next = NULL;
        }
    }
}


///////////////////////Delete student////////////////////
void deleteStudent(){
    int stdNo;
    node *p,*q;
    printf("Enter student number that will be deleted: ");
    scanf("%d", &stdNo);

    p=head;
    if(p->no ==stdNo){
        //delete beginning
        head = p->next;
        free(p);
        printf("\n Record deleted succesfully..");
    }
    else{
        while(p->next!=NULL && p->no!=stdNo){
            q=p;
            p=p->next;

        }
        if(p->no == stdNO){
            //delete from middle or end
            q->next = p->next;
            free(p);
            printf("\n Record deleted succesfully");

        }else if(p->next == NULL){
            //no node found
            printf("\n No student found");
        }
    }
}

//////////////////////////Find highest grade//////////////////////
double TotalGrade(int mid,int Final){
    return (0.4*mid)+(0.6*Final);
}

void HighestTotal(){
    node *p;
    p=head;
    Highest = head;
    while(p->next !=NULL{
          p = p->next;
          if(TotalGrade(p->midterm,p->finalterm)>TotalGrade(Highest->midterm,Highest->finalterm))
            Highest = p;
          }
    printf("Highest studen: \n");
    printf("No: %d, Name:%s,Highest Grade: %.2f\n",Highest->no,Highest->name,TotalGrade(Highest->midterm,Highest->finalterm));

}

void ClassAverage(){
    double classgradesAverage = 0;
    double sum = 0;
    int counter = 0;
    node *p;
    p=head;
    if(p==NULL){
        printf("Empty student list");
    }else{
        do{
            sum += TotalGrade(p->midterm,p->finalterm);
            p=p->next;
            counter++;
        }while(p!=NULL);
        classgradesAverage = sum/counter;
        printf("\n Class grades average: %d", classgradesAverage);
    }
}

/////////////////////////Main//////////////////
int main(void){
    int selection = 0;
    printf("\n===================Student list=====================\n");
    studentList();
    printf("\n===================end of list=====================\n");
    printf("Press any key to continue");
    getch();
    printf("\n\n*************Main menu**************");
    printf("Choose ");
    scanf("%d",&selection);

    switch(selection){
        case 1: printf("Create list");
                createstudentList();
                break;
        case 2: printf("Add new student");
                addStudent():
                break;
        case 3: printf("Delete student");
                deleteStudent():
                break;
        case 4: printf("FInd highest");
                HighestTotal();
                break;
        case 5: printf("Average of class");
                ClassAverage();
                break;
        case 6: exit(0);
    }while(1);
}
