//Program for university students examination results.

/*
Description: Program for university students examination results.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
char name[50];
char regNumber[30];
int totalMarks;
};

int main() {
FILE *filePtr;
struct Student studentRecord;

filePtr = fopen("results.dat", "rb");

if (filePtr == NULL) {
printf("Error: Could not open file results.dat.\n");
return 1;
}

printf("--- STUDENT EXAMINATION RESULTS ---\n");
printf("%-25s %-10s\n", "Name", "Marks");
printf("-----------------------------------\n");

while (fread(&studentRecord, sizeof(struct Student), 1, filePtr) == 1) {
printf("%-25s %-10d\n", studentRecord.name, studentRecord.totalMarks);
}

fclose(filePtr);

return 0;
}

