#include<stdio.h>
#include<conio.h>
int main(){
	char c;
	printf("Enter any character: ");
	c=getch();
	if(c>=48&&c<=57)
		printf("Entered character is number.");
	else if(c>=65&&c<=90)
		printf("Entered character is uppercase Alphabet.");
	else if(c>=97&&c<=122)
		printf("Entered character is lowercase Alphabet.");
	else
		printf("Entered character is a special character.");
	getch();
}
