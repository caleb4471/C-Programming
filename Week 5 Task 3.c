// Function definition to convert Fahrenheit to Celsius

/*
Description: Program converting temp from Fahrenheite to celsius.
Name: Caleb Anuri.
Reg No: BCS-05-0042/2025.
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
return (fahrenheit - 32) * (5.0 / 9.0);
}

int main() {
float fahrenheitInput;

printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheitInput);

float celsiusOutput = convertToCelsius(fahrenheitInput);

printf("Temperature in Celsius: %.2f°C\n", celsiusOutput);

return 0;
}

