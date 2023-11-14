#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("How many Reverse natural nos you want to print on the screen? ");
	scanf("%d",&n);
	while(n>0)
		printf("%d ",n--);
	getch();
}
