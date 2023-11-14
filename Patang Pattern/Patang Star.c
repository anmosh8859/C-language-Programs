#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=2;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=8-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
