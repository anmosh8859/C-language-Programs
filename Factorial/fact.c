#include<stdio.h>
unsigned long long int fact(int);
void main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("factorial=%lld",fact(n));
	getch();
}
unsigned long long int fact(int n)
{
	unsigned long long int fact=1;
	int i;
	for(i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
