#include<stdio.h>
void main()
{
	int i,n=36,f[50],fact=1;
	f[0]=1;
	printf("%d",f[0]);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			n=n/i;
			f[fact]=i;
			printf("%d",f[fact]);
			fact++;
		}
	}
}
