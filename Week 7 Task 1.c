//Program used by library to keep traxk of books.

/*
Description: Program used by library to keep traxk of books.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
FILE *filePtr;
char bookTitle[100];

filePtr = fopen("borrowed_books.txt", "a");

if (filePtr == NULL) {
printf("Error: Could not open file.\n");
return 1;
}

printf("Enter book title to add: ");
fgets(bookTitle, sizeof(bookTitle), stdin);

bookTitle[strcspn(bookTitle, "\n")] = 0;

fprintf(filePtr, "%s\n", bookTitle);

fclose(filePtr);

printf("Confirmation: Title '%s' successfully stored in borrowed_books.txt!\n", bookTitle);

return 0;
}

