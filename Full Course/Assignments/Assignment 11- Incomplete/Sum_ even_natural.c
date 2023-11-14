#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	long long int s=0;
	printf("Enter the no. to find sum of first even natural nos: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=i*2+s;
	printf("Sum of first %d even natural numbers: %lld",n,s);
}
