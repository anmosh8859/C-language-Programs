#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	if(x%7==0){
		if(x%3==0)
			printf("Number is divisible by 7 as well as 3.");
		else
			printf("Number is divisible by 7 only.");
	}
	else{
		if(x%3==0)
		{
			printf("Number is divisible by 3 only");
		}
		else
			printf("Number is neither divisible by 7 nor 3.");
	}
	getch();
}
