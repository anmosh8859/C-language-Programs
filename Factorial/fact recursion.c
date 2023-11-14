#include<stdio.h>
unsigned long long int fact(int);
void main()
{
	int n;
	printf("Enter the number: ");
	A:scanf("%d",&n);
	if(n<0)
	{
		printf("Invalid Input!Enter any natural number...\n");
		goto A;
	}
	if(n==0)
		printf("Factorial: 1");
	else
		printf("Factorial: %llu",fact(n));
	getch();
}
unsigned long long int fact(n)
{
	if(n==1)
		return 1;
	else
		return(n*fact(n-1));
}
