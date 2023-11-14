#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Put a value in var a: ");
	scanf("%d",&a);
	printf("Put a value in var b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value after swaping a: %d, b=%d",a,b);
	getch();
}
