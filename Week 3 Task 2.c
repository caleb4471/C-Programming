//Water bill calculator
/*
Name:Caleb Anuri
Reg NO:BCS-05-0042/2025
Date:16/06/2026
*/

#include<stdio.h>

int main(){
	
    int units=0;
    int totalbill=0;
    
    printf("Enter the total units used:");
    scanf("%d", &units);
    
    if(units<=30){
    	totalbill=units*20;
	}	
    else if(units>30 &&units<=60){
		totalbill=units*25;
	}
    else if(units>60){
		totalbill=units*30;
	}

	printf("Your totalbill is:%d\n", totalbill);
			
	return 0;
}
