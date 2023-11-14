#include<stdio.h>
#include<conio.h>
int main(){
	int c;
	printf("Enter any month number: ");
	scanf("%d",&c);
	if(c==1||c==3||c==5||c==7||c==8||c==10||c==12)
		printf("Entered month will have 31 days.");
	else if(c==4||c==6||c==9||c==11)
		printf("Entered month will have 30 days.");
	else if(c==2)
		printf("Entered month have 28 or 29 days");
	else
		printf("Entered month number is invalid");
	getch();
}
