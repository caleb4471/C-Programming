//Program for function called Electrical Bill.

/*
Description: Program calculating electrical bill.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>

float calculateElectricBill(int units) {
float totalBill = 0.0;

if (units <= 100) {
totalBill = units * 10;
}
else if (units <= 200) {
totalBill = (100 * 10) + ((units - 100) * 15);
}
else {
totalBill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
}

return totalBill;
}

int main() {
int unitsConsumed;

printf("Enter the number of units consumed: ");
scanf("%d", &unitsConsumed);

float billAmount = calculateElectricBill(unitsConsumed);

printf("Total Bill: KSh. %.2f\n", billAmount);

return 0;
}
