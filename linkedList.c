#include <stdio.h>
#include <stdlib.h>

struct student {
    int no;
    char name[40];
    int age;
    struct student *next;
};

typedef struct student node;

node* createList() {
    int n, k;
    node *head = NULL, *p = NULL;
    printf("How many students are you gonna enter? ");
    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        if (k == 0) {
            head = (node*)malloc(sizeof(node));
            p = head;
        } else {
            p->next = (node*)malloc(sizeof(node));
            p = p->next;
        }
        printf("Enter %d. student number: ", k + 1);
        scanf("%d", &p->no);
        printf("Enter %d. student name: ", k + 1);
        scanf("%s", p->name);
        printf("Enter %d. student age: ", k + 1);
        scanf("%d", &p->age);
    }
    p->next = NULL;
    return head;
}

void traverseList(node* head) {
    int counter = 1;
    node *p = head;
    while (p != NULL) {
        printf("%d- %d %s %d\n", counter, p->no, p->name, p->age);
        p = p->next;
        counter++;
    }
}

node* addNode(node* head) {
    int stdNo;
    node *p = head, *q = NULL;
    node *newNode = (node*)malloc(sizeof(node));
    printf("Enter new student number: ");
    scanf("%d", &newNode->no);
    printf("Enter new student name: ");
    scanf("%s", newNode->name);
    printf("Enter new student age: ");
    scanf("%d", &newNode->age);

    printf("Enter student number that new record will be added right before: \n");
    printf("Press 0 to add to the end of list...\n");
    scanf("%d", &stdNo);

    if (stdNo == 0) {
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
        newNode->next = NULL;
    } else if (p->no == stdNo) { // Adding at the beginning
        newNode->next = p;
        head = newNode;
    } else {
        while (p != NULL && p->no != stdNo) {
            q = p;
            p = p->next;
        }
        if (p != NULL && p->no == stdNo) { // Adding before stdNo
            q->next = newNode;
            newNode->next = p;
        } else { // Adding to end
            q->next = newNode;
            newNode->next = NULL;
        }
    }
    return head;
}

node* deleteNode(node* head) {
    int stdNo;
    node *p = head, *q = NULL;

    printf("Enter student number that will be deleted: ");
    scanf("%d", &stdNo);

    if (p != NULL && p->no == stdNo) { // Delete beginning node
        head = p->next;
        free(p);
    } else {
        while (p != NULL && p->no != stdNo) {
            q = p;
            p = p->next;
        }
        if (p != NULL && p->no == stdNo) { // Delete from middle or end
            q->next = p->next;
            free(p);
        } else if (p == NULL) { // No node found to delete
            printf("No node found to delete...\n");
        }
    }
    return head;
}

int main() {
    node *head = NULL;
    int selection = 0;
    while (1) {
        printf("\n\n*****************Main Menu**************\n");
        printf("\nChoose option from given list...\n");
        printf("\n==========================================\n");
        printf("1. Create list\n2. Traverse List\n3. Add Node\n4. Delete Node\n5. Exit\n");
        scanf("%d", &selection);
        switch (selection) {
            case 1:
                printf("\n\n***********Create List***********\n");
                head = createList();
                printf("Adres: %p\n", (void*)head);
                traverseList(head);
                break;
            case 2:
                printf("\n\n**************Traverse List***************\n");
                traverseList(head);
                break;
            case 3:
                printf("\n\n******************Add Node**************\n");
                head = addNode(head);
                traverseList(head);
                break;
            case 4:
                printf("\n\n***************Delete Node*****************\n");
                head = deleteNode(head);
                traverseList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong entrance...\n");
                break;
        }
    }
}
