#include<stdio.h>
void main()
{
	int n1,n2,n,h=1,i;
	printf("Enter any two numbers\n");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	n=n1;
	else
	n=n2;
	for(i=2;i<=n;i++)
	{
 		if(n1%i==0&&n2%i==0)
 		{
			n1=n1/i;
			n2=n2/i;
			h=h*i;
 		}
	}
	printf("\nHCF=%d",h);
	getch();
 }
