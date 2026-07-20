// Function definition to calculate the total fare

/*
Description: Program calculates total fare.
Name: Caleb Anuri.
Reg No:BCS-05-0042/2025.
*/

#include <stdio.h>

float calculateFare(float distance) {
float fareRate = 50.0;
return distance * fareRate;
}

int main() {
float distanceTraveled;

printf("Enter the distance traveled (in km): ");
scanf("%f", &distanceTraveled);

float totalFare = calculateFare(distanceTraveled);

printf("Total Fare: KSh. %.2f\n", totalFare);

return 0;
}
