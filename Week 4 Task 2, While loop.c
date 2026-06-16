//While loop

/* 
Name:Caleb Anuri
Reg NO:BCS-05-0042/2025
Date:14/06/2026
*/

#include <stdio.h>

int main(){

	float bankbalance=10000;
	float amount;
	
	while(bankbalance>0){
		printf("Enter amount to withdraw:");
		scanf("%f", &amount);
		
		bankbalance = bankbalance - amount;
		
		printf("Your bank balance is:%.2f\n", bankbalance);
		
	}	
	
	printf("You have inadequate funds to withdraw.");
	
	return 0;
}