//Program to enter password 1234 to log in.

/*
Description: Password program.
Name: Caleb Anuri.
Reg. No: BCS-05-0042/2025.
*/

#include <stdio.h>

int main() {
int password;

do {
printf("Enter the password: ");
scanf("%d", &password);

if (password != 1234) {
printf("Incorrect password. Try again.\n\n");
}
} while (password != 1234);

printf("Access Granted\n");

return 0;
}
