#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	printf("Enter any number: ");
	scanf("%d",&i);
	printf("Last digit of the number you entered: %d",i%10);
	getch();
}
