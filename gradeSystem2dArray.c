//this program saves 2 test result of 3 students

#include <stdio.h>

int main(void){
	int students,grades;
	int array[3][2];
	
	printf("Lets start to enter student grades...\n7");
	
	for(students=0;students<3;students++){
		for(grades=0;grades<2;grades++){
			printf("Enter the grades for %d. student: " , students);
			scanf("%d" , &array[students][grades]);
		}
	}
	
	for(students=0;students<3;students++){
		printf("Student %d is: " , students);
		for(grades=0;grades<2;grades++){
			printf("%d" , array[students][grades]);
		}
		printf("\n");
	}
	
	return 0;
}
