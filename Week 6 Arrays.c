//Program to monitor hotel revenue and room occupancy.

/*
Description: Program to monitor hotel revenue and room occupancy.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

// 1D ARRAY – Weekly Revenue Tracker

printf("--- 1D ARRAY: WEEKLY REVENUE TRACKER ---\n");
float revenue[7];
float totalWeeklyRevenue = 0.0;
float averageDailyRevenue = 0.0;

for(int i = 0; i < 7; i++) {
printf("Enter revenue for day %d: ", i + 1);
scanf("%f", &revenue[i]);
totalWeeklyRevenue += revenue[i];
}

averageDailyRevenue = totalWeeklyRevenue / 7.0;

printf("\nTotal Weekly Revenue: %.2f\n", totalWeeklyRevenue);
printf("Average Daily Revenue: %.2f\n\n", averageDailyRevenue);

// 2D ARRAY – Room Occupancy (One Branch)

printf("--- 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ---\n");
int occupancy[5][10];

for(int floor = 0; floor < 5; floor++) {
for(int room = 0; room < 10; room++) {
occupancy[floor][room] = rand() % 2; // Generates either 0 or 1
}
}

for(int floor = 0; floor < 5; floor++) {
int occupiedCount = 0;
int vacantCount = 0;

for(int room = 0; room < 10; room++) {
if(occupancy[floor][room] == 1) {
occupiedCount++;
} else {
vacantCount++;
}
}
printf("Floor %d -> Occupied Rooms: %d, Vacant Rooms: %d\n", floor + 1, occupiedCount, vacantCount);
}
printf("\n");


// 3D ARRAY – Multiple Branches

printf("--- 3D ARRAY: MULTIPLE BRANCHES ---\n");
int chain[3][5][10];
int totalOccupiedChain = 0;

for(int branch = 0; branch < 3; branch++) {
for(int floor = 0; floor < 5; floor++) {
for(int room = 0; room < 10; room++) {
chain[branch][floor][room] = rand() % 2;

if(chain[branch][floor][room] == 1) {
totalOccupiedChain++;
}
}
}
}

printf("Total number of occupied rooms across all 3 branches: %d\n", totalOccupiedChain);

return 0;
}

