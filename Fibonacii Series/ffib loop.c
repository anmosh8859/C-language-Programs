#include<stdio.h>
void main()
{
	int n,i;
	unsigned long long int x=0,y=1,fab;
	printf("Enter the term of series\n");
	A:scanf("%d",&n);
	if(n<0)
	{
		printf("Enter any natural number\n");
		goto A;
	}
	if(n==0)
		printf("Series: %llu",x);
	if(n>=1)
		printf("Series: %llu\n  %llu\n ",x,y);
	for(i=2;i<n;i++)
	{
		fab=x+y;
		printf(" %llu\n ",fab);
		x=y;
		y=fab;
	}
	getch();
}
