#include <stdio.h>
#include <stdlib.h>

struct clientData{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

unsigned int enterChoice(void);
void csvFile(FILE *readPtr);
void updateRecord(FILE *fptr);
void newRecord(FILE *fptr);
void deleteRecord(FILE *fptr);
void printRecords(FILE *fptr);

int main(void){
    FILE *cfPtr;
    if((cfPtr=fopen("accounts.dat","rb+")==NULL)){
        puts("File cannot be opened");
    }else{
        unsigned int choice;
        while((choice = enterChoice())!=6){
            switch(choice){
                case 1:csvFile(cfPtr);break;
                case 2:updateRecord(cfPtr);break;
                case 3:newRecord(cfPtr);break;
                case 4:deleteRecord(cfPtr);break;
                case 5:printRecords(cfPtr);break;
                default:puts("Incorrect choice");break;
            }
        }
        fclose(cfPtr);
    }

}
unsigned int enterChoice(void){
    usigned int menuChoice;
    scanf("%d",&menuChoice);
    return menuChoice;
}

void csvFile(FILE *readPtr){
    FILE *writePtr;
    if(writePtr=fopen("accounts.csv","w")==NULL){
        puts("File cannot opened");
    }else{
        rewind(readPtr);
        fprintf(writePtr,"%s,%s%s%s","Acct","Name"....);
        while(!feof(readPtr)){
            struct clientData client=(0,"","",0.0);
            int result=fread(&client,sizeof(struct clientData),1,readPtr);
            if(result !=0 && client.acctNum!=0){
                fprintf(writePtr,"%d",client.acctNum);
            }
        }
        fclose(writePtr);
    }
}

void updateRecord(FILE *fptr){
    printf("Enter acct num: ");
    unsigned int account;
    scanf("%d",&account);

    fseek(fptr,(account-1)*sizeof(struct clientData),SEEK_SET);

    struct clientData client=(0,"","",0.0);
    fread(&client,sizeof(struct clientData),1,fptr);

    if(client.acctNum==0){printf("There is no info");
    }else{
        printf("Enter charge for payment: ");
        double transaction;
        scanf("%lf",&transaction);
        client.balance+=transaction;

        fseek(fPtr,(account-1)*sizeof(struct clientData),SEEK_SET);
    }
}

void deleteRecord(FILE *fptr){
    printf("Enter acct num for delete");
    unsigned int accountNum;
    scanf("%d",&accountNum);

    fseek(fptr,(accountNum-1)*sizeof(struct clientData),SEEK_SET);

    struct clientData client;
    fread(&client,sizeof(struct clientData),1,fPtr);

    if(client.acctNum == 0)printf("There is no record");
    else{
        fseek(fptr,(accountNum-1)*sizeof(struct clientData),SEEK_SET);
        struct clientData blankClient = {0,"","",0.0};
        if(fwrite(&blankClient,sizeof(struct clientData),1,fPtr)==1){
            printf("Deleted succesfully")
        }
    }
}

void newRecord(FILE *fPtr){
    printf("Enter account number");
    unsigned int accountNum;
    scanf("%d",&accountNum);

    fseek(fPtr,(accountNum-1)*sizeof(struct clientData),SEEK_SET);

    struct clientData newClient={0,"","",0.0};

    fread(&newClient,sizeof(struct clientData),1,fPtr);

    if(newClient.acctNum!=0){
        printf("account filled")
    }else{
        printf("Enter info about client");
        scanf("%s%s%lf",&newClient.lastName,&newClient.firstName,&newClient.balance);

        newClient.acctNum=accountNum;

        fseek(fPtr,(newClient.acctNum-1)*sizeof(clientData),SEEK-SET);
        if(fwrite(&client,sizeof(clientData),1,fPtr)==1){
            printf("Record inserted");
        }
    }
}

void printRecordslist(FILE *fPtr){
    while(!feof(fPtr)){
        struct clientData client={0,"","",0};
        int result=fread(&client,sizeof(clientData),1,fPtr);

        if(result!=0&&client.acctNum!=0){
            printf("%d%s%s%f",client.acctNum,client.firstName,client.lastName,client.balance);
        }
    }
}
