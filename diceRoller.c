//this program calculates number of frequency of each value of dice
#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int f1,f2,f3,f4,f5,f6;

    //loop 6000 times
    unsigned int roll,dFace;
    for(roll=0;roll<=6000;roll++){
        int dFace = 1+rand()%6;

        //determining which dice face do we get
        switch(dFace){
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case 6:
                f6++;
                break;

        }
    }
    //printing frequency of each roll face
    printf("\n", "Face ", "Frequency");
    printf("1%13u\n",f1);
    printf("2%13u\n",f2);
    printf("3%13u\n",f3);
    printf("4%13u\n",f4);
    printf("5%13u\n",f5);
    printf("6%13u\n",f6);
}




