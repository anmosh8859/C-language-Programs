#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	printf("Enter the three digit number: ");
	scanf("%d",&i);
	printf("First digit of your three digit number: %d",(i/10)%10);
	getch();
}
