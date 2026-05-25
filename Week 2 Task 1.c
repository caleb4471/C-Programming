//Program to calculate vol. and S.A of cylinder

/*
 Name:Caleb Anuri
 REG No:BSC-05-0042/2025
 Date:23/05/2026
*/

# include <stdio.h>

int main(){
	
	float r;
	float h;
	float pi =3.142;
	double surface_area ;
	double volume ;
	
	
	printf("Enter the radius,r:");
	scanf("%f", &r);
	
	printf("Enter the height,h:");
	scanf("%f", &h);
	

	surface_area= ( 2*pi * r*r ) + ( 2 *pi*r*h);
	volume= ( pi *r*r*h );
	
	printf("Surface area= %.2f\n", surface_area);
	printf("Volume= %.2f\n", volume);
	
	return 0;
}