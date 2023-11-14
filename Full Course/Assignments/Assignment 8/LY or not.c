#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	printf("Enter any year: ");
	scanf("%d",&x);
	printf(x%4==0?"Entered year is leap year.":"Entered year is non leap year.");
	getch();
}
