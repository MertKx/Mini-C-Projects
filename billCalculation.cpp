/*This program calculates bill value for electricity usage */

#include <stdio.h>
int main (void) {
	int bill,usage;
	printf("Enter usage: ");
	scanf("%d" , &usage);
	
	if(usage<=50) bill=usage*0.5;
	if(usage>50 && usage<=150) bill=(50*0.5) + ((usage-50)*0.75);
	if(usage>150 && usage<=250) bill=(50*0.5) + (100*0.75) + ((usage-150)*1.2);
	if(usage>250) bill=(50*0.5) + (100*0.75) + (100*1.2) + ((usage-250) * 1.5);
	
	bill += (bill*20)/100;
	
	printf("Your bill is: %d\n" , bill);
	
	return 0;
	
}
