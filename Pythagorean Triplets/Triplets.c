#include<stdio.h>
int nextPerfectSqaure(int);
void main()
{
	int l=3,b=5,h=6,n,n1,l1,b1,h1;
	printf("Enter the number of triplets you need to get!:");
	A:scanf("%d",&n);
	if(n<=0)
	{
		printf("Error!Enter the number of triplets greater than zero:");
		goto A;
	}
	else if(n>0)
	{
		n1=n;
		n=1;
		printf("Pythagorean Triplet %d: %d %d %d\n",n,l,b,h);
		while(n<n1)
		{
			while(l<h&&n<=n1)
			{
				while(b<h&&n<=n1)
				{
					b++;
					if(l*l+b*b==h*h&&n<n1)
					{
						if(b1=l&&l1==b)
							continue;
						printf("Pythagorean Triplet %d: %d %d %d\n",n+1,l,b,h);
						n++;
						l1=l;
					}
				}
				b=1;
				l++;
			}
			l=1;
			h++;
		}
	}
	getch();
}
