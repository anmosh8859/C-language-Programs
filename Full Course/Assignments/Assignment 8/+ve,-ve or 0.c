#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	if(x>0)
		printf("Number is +ve");
	if(x<0)
		printf("Number is -ve");
	if(x==0)
		printf("Number is 0");
	getch();
}
