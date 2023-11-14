#include<stdio.h>
#include<conio.h>
int main(){
	float x;
	printf("Enter any number: ");
	scanf("%f",&x);
	//x>0?printf("Number is +ve"):printf("Number is non +ve");
	printf(x>0?"Number is +ve":"Number is non +ve");
	getch();
}

