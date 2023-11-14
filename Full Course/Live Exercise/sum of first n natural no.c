#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j=0;
	printf("How many first natural numbers you want to sum?\n--> ");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
		j+=n;
	printf("Sum: %d",j);
	getch();
}
