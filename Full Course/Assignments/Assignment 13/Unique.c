#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int w_d;
	printf("Enter the week day number: ");
	scanf("%d",&w_d);
	switch(w_d){
		case 1:
			printf("Monday umm!");
			break;
		case 2:
			printf("Tuesday ohoo!");
			break;
		case 3:
			printf("Wednesday aah!");
			break;
		case 4:
			printf("Thursday aahaa!");
			break;
		case 5:
			printf("Friday oh ho!");
			break;
		case 6:
			printf("Saturday Weekend holiday!");
			break;
		case 7:
			printf("Sunday Hurrah!");
			break;
		default:
			printf("You entered invalid week day number.");
	}
	getch();
}
