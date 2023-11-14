#include<stdio.h>
#include<conio.h>
int main(){
	float p,r,t;
	printf("Enter the Principle amount, rate of loan per annum and duration of loan in yrs: ");
	scanf("%f %f %f",&p, &r, &t);
	printf("Interest = %f",p*r*t/100);
	getch();
}
