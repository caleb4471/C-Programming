// Program to manage employee payroll information.

/*
Name:Caleb Anuri
Reg No: BCS-05-0042/2025
Date:29/06/2026
*/

#include<stdio.h>
#include<string.h>

struct Employee{
	char employeeID[10];
	char employeeName[30];
	char department[30];
	double basicSalary;
	double allowance;
}; 

double calculateGrossSalary(struct Employee emp){
    return emp.basicSalary + emp.allowance;
}

int main(){
	struct Employee employees[3];
	int i;
	
	for (i = 0; i < 3; i++){
		printf("Enter details for employee %d\n", i + 1);
		
		printf("Employee ID:");
		fgets(employees[i].employeeID, sizeof(employees[i].employeeID), stdin);
		employees[i].employeeID[strcspn(employees[i].employeeID, "\n")] = '\0';
		
		printf("Employee Name:");
		fgets(employees[i].employeeName, sizeof(employees[i].employeeName), stdin);
		employees[i].employeeName[strcspn(employees[i].employeeName, "\n")] = '0';
		
		printf("Department:");
		fgets(employees[i].department, sizeof(employees[i].department), stdin);
		employees[i].department[strcspn(employees[i].department, "\n")] = '0';
		
		printf("Basic Salary:");
		scanf("%lf", &employees[i].basicSalary);
		
		printf("Allowance:");
		scanf("%lf", &employees[i].allowance);
		
		while(getchar() !='\n');
		printf("\n");
		
	}
	
	printf("        EMPLOYEE PAYROLL REPORT        \n");
	printf("---------------------------------------------------\n");
	printf("%-7s %-20s %-15s %-15s\n", "ID", "Name", "Department", "Gross Salary (Ksh)");
	printf("---------------------------------------------------\n");
	
	for (i = 0; i < 3; i++){
		double grossSalary = calculateGrossSalary(employees[i]);
		printf("%-7s %-20s %-15s %-15.2f\n",
		employees[i].employeeID,
		employees[i].employeeName,
		employees[i].department,
		grossSalary);
	}
	
	return 0;
}    