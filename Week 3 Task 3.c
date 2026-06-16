//Mobile data bundle purchase

/*
Name:Caleb Anuri
Reg NO:BCS-05-0042/2025
Date:14/06/2026
*/

#include <stdio.h>
int choice;

int main(){
	printf("Data bundles offered:\n");
	printf("1. 100MB @50 KES.\n");
	printf("2. 500MB @200 KES.\n");
	printf("3. 1GB @350 KES.\n");
	printf("4. 2GB @600 KES.\n");
	
	printf("Enter the your bundle choice:\n");
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			printf("100MB cost 50KSh\n");
			break;
		case 2:
			printf("500MB cost 200Ksh\n");
			break;
		case 3:
			printf("1GB cost 350Ksh\n");
			break;
		case 4:
			printf("2GB cost 600Ksh\n");
			break;
		default:
			printf("Invalid choice\n");
	}
	return 0;
}