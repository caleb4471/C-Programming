// Exam eligibility

#include <stdio.h>

int main(){
	
	int attendance=attendance;
	int marks=marks;
	
	printf("Enter your attendance:\n");
	scanf("%d", &attendance);
	
	printf("Enter your marks:\n");
	scanf("%d", &marks);
	
	if(attendance>=75 && marks>=40){
	printf("You are eligible.\n");
}
else
{
	printf("Not eligible.");
}
	
	return 0;
}