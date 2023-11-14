#include<stdio.h>
#include<conio.h>
int main(){
	float x;
	printf("Enter any number: ");
	scanf("%f",&x);
	if (x>0){
		printf("Number is +ve");
	}
	if(x==0){
		printf("Neither +ve or -ve");
	}
	if (x<0){
		printf("Number is -ve");
	}
	getch();
}

