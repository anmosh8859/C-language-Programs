#include<stdio.h>
int flcm(int[1000]);
void main()
{
	int n[1000],i=1;
	printf("Enter the number of numbers to be find LCM\n");
	scanf("%d",&n[0]);
	printf("Enter the numbers\n");
	while(i<=n[0])
	{
		scanf("%d",&n[i]);
		i++;
	}
	printf("LCM of [");
	for(i=1;i<=n[0];i++)
		printf("%d ",n[i]);
	printf("]: %d",flcm(n));
	getch();
}
int prime(int);
int max(int[1000]);
int flcm(int n[])
{
	int i,p=2,flag,l=1;
	while(max(n)!=1)
	{
		flag=0;
		for(i=1;i<=n[0];i++)
		{
			if(n[i]%p==0)
			{
				n[i]/=p;
				flag=1;
			}
		}
		if(flag==0)
			p=prime(p);
		else
			l*=p;
	}
	return l;
}
int max(int n[])
{
	int i,max;
	max=n[1];
	for(i=1;i<=n[0];i++)
	{
		if(max<n[i])
			max=n[i];
	}
	return max;
}
int prime(int p)
{
	int n=2,flag=0;
	if(p==2)
		return 3;
	p++;
	while(n<=(p/2))
	{
		while(n<=(p/2))
		{
			if(p%n==0)
				flag=1;
			n++;
		}
		if(flag==1)
		{
			p++;
			n=2;
			flag=0;
		}
		else
			return p;
	}
}
