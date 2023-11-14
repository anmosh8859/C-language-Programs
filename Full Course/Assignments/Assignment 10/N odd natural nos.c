#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1;
	printf("Enter the total no of odd natural nos, you want to print: ");
	scanf("%d",&n);
	while(n>0){
		printf("%d ",(i++)*2-1);
		n--;
	}
	getch();
}
