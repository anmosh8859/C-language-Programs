#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	printf("Enter any numerical value: ");
	scanf("%d",&i);
	printf("Your manipulated number is: %d",i-i%10);
	getch();
}
