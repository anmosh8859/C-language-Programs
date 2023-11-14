#include<stdio.h>
#include<conio.h>
int main(){
	int x,i;
	printf("You have three chances to enter even number.\n");
	for(i=0;i<3;i++){
		printf("Enter an even number: ");
		scanf("%d",&x);
		if(x%2==0){
			printf("You are right.\nHurrah! You Win.");
			break;
		}
		printf("Wrong input\n");
		if(i<2)
			printf("Again ");
	}
	if(i==3)
		printf("Sorry! you lose. Game Over.");
	getch();
}
