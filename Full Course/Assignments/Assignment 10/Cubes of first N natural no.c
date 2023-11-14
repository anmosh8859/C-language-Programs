#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1;
	printf("Enter the total no of cubes of first natural nos, you want to print: ");
	scanf("%d",&n);
	while(n>0){
		printf("\n%d",i);
		printf(": %d ",i*i*i);
		i+=1;
		--n;
	}
	getch();
}
