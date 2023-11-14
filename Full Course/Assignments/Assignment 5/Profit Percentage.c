#include<stdio.h>
#include<conio.h>
int main(){
	float cp,sp;
	printf("Enter the Cost Price: ");
	scanf("%f",&cp);
	printf("\nEnter the Selling Price: ");
	scanf("%f",&sp);
	printf("\nProfit Percentage: %f",((sp-cp)/cp)*100);
}
