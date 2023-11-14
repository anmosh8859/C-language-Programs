#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	printf(x%3==0&&x%2==0?"Number is divisible by 3 and 2":"Number is not divisible by 3 and 2");
	getch();
}
