#include<stdio.h>
long long int fibonacii(int);
void main()
{
	int n,i;
	long long int fab;
	printf("Enter the term of series\n");
	A:scanf("%d",&n);
	if(n<0)
	{
		printf("Enter any natural number\n");
		goto A;
	}
	printf("Series: ");
	for(i=0;i<n;i++)
	{
		fab=fibonacii(i);
		printf(" %lld ",fab);
	}
	getch();
}
 long long int fibonacii(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fibonacii(n-1)+fibonacii(n-2));
}
