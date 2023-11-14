#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1;
	printf("How many even natural nos you want to print on the screen? ");
	scanf("%d",&n);
	while(n>0){
		printf("%d ",(i++)*2);
		n--;
	}
	getch();
}
