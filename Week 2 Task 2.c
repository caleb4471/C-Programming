// Program to approve user of loan.

/*
 Name: Caleb Anuri
 REG No: BCS-05-0042/2025
 Date:24/05/2026
*/

#include <stdio.h>

int main()
{
	int age;
	double income;
	
	printf(" Enter your age:");
	scanf( "%d", &age);
	
	printf("Enter your annual income:");
	scanf( "%lf", &income);
	
	if (age >= 21 && income >= 21000){
		printf("Congratulations you qualify for a loan.\n");
	}
	
	else{
		printf("Unfortunately, we are unable to offer you a loan.\n");
		
	}
	return 0;
}