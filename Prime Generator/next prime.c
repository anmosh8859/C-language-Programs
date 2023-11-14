#include<stdio.h>
int prime(int p);
void main()
{
	int i;
	scanf("%d",&i);
	printf("%d",prime(i));
	getch();
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
