#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("How many odd reverse natural no. you want?\n");
	scanf("%d",&n);
	printf("Your %d odd natural no. in reverse order are: ",n);
	while((n*2-1)>=1){
		printf("%d ",n*2-1);
		n--;
	}
	getch();
}
