#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int month_number;
	while(1){
		printf("\nPress 0 to exit\nOR\nEnter the month number: ");
		scanf("%d",&month_number);
		switch(month_number){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("This month has 31 days.\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("This month has 30 days.\n");
				break;
			case 2:
				printf("This month may have either 28 or 29 days.\n");
				break;
			case 0:
				exit(0);
			default:
				printf("Not a month number try again.\n");
		}
	}
}
