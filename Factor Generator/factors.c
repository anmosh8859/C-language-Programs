#include<stdio.h>
void main()
{
	int i,n,f[50],fact=1;
	printf("Enter any Number: ");
	scanf("%d",&n);
	f[0]=1;
	printf("%d ",f[0]);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			n=n/i;
			f[fact]=i;
			printf("%d ",f[fact]);
			fact++;
		}
	}
	getch();
}
