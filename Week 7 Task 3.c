//Program that stores a shop's daily transactions.

/*
Description: Program that stores a shop's daily transactions.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *filePtr;
float transactionAmount;
float totalSales = 0.0;

filePtr = fopen("sales.txt", "r");

if (filePtr == NULL) {
printf("Error: Could not open file sales.txt.\n");
return 1;
}

while (fscanf(filePtr, "%f", &transactionAmount) == 1) {
totalSales += transactionAmount;
}

printf("Total Sales for the Day: KSh. %.2f\n", totalSales);

fclose(filePtr);

return 0;
}

