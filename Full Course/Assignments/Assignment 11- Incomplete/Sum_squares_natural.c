#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	long long int s=0;
	printf("Enter the no. to find sum of square of first natural nos: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=i*i+s;
	printf("Sum of square of first %d natural numbers: %lld",n,s);
	getch();
}
