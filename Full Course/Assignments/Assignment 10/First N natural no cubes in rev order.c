#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("How many Reverse ordered cubes of first natural nos you want to print on the screen? ");
	scanf("%d",&n);
	while(n>0){
		printf("%d: %d\n",n,n*n*n);
		n-=1;
	}
	getch();
}
