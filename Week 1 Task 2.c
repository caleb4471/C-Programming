//Program used to prompt user to enter his/her details

/*
Description:Program prompting user to enter details
Name:Caleb Anuri Ngoge
ADM No:BCS-05-0042/2025
Date:13/05/2026
*/
#include <stdio.h>

int main(){
	
	float height;
	double balance;
	char phone[10];
	
	// User input
	printf("Enter your height:");
	scanf("%f", &height);
	
	printf("Enter your account balance in Ksh:");
	scanf("%lf", &balance);
	
	printf("Enter your phone number:");
	scanf("%s", phone);
	
	// Output
	printf("\n----- User details------\n");
	printf("Height: %.2f\n", height);
	printf("Bank balance: Ksh %.2lf\n", balance);
	printf("Phone Number: %s\n", phone);
	
	return 0;
} 
