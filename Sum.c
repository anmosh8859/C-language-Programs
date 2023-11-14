#include<stdio.h>
void sum(int,int);
void main()
{
	int a,b,c;
	printf("Enter any two num\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int x,int y)
{
	printf("Sum=%d",(x+y));
}
