#include<stdio.h>
#include<conio.h>
int main(){
	int n,d;
	printf("Enter any number to be append: ");
	scanf("%d",&n);
	printf("Enter any digit to be appended in the number: ");
	scanf("%d",&d);
	printf("Your appended number is: %d",n*10+d);
	getch();
}
