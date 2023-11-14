#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	printf("Enter any three digit number: ");
	scanf("%d",&i);
	i=(i%10)*100+i/10;
	printf("New numbers: \n%d",i);
	i=(i%10)*100+i/10;
	printf("\n%d",i);
	i=(i%10)*100+i/10;
	printf("\n%d",i);
	getch();
}
