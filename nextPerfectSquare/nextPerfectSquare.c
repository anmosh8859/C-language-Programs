#include<stdio.h>
#include<math.h>
int nextPerfectSqaure(int);
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d",nextPerfectSquare(n));
}
int nextPerfectSquare(int n)
{
	if(n<0)
	{
		n=sqrt(n);
		n--;
		n=n*n;
		return n;
	}
	if(n>=0)
	{
		n=sqrt(n);
		n++;
		n=n*n;
		return n;
	}
}
