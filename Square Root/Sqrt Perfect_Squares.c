#include<stdio.h>
#include<stdlib.h>
void main()
{
	unsigned int i=2,sqrt=1,n1,cpl=0,n;
	printf("Enter the number\n");
	A:scanf("%d",&n1);
	n=n1;
	if(n1<4)
	{
		printf("Least perfect square can't be lesser than 4 ,So Re-Enter the number\n");
		goto A;
	}
	else
	{
		while(n1!=1&&i<=n1)
		{
			while(n1%i==0)
			{
				n1/=i;
				cpl++;
				if(cpl%2==0)
					sqrt*=i;
			}
			if(cpl%2!=0&&cpl>0)
			{
				printf("Number has not integer square root!\n");
				getch();
				exit(1);
			}
			cpl=0;
			i++;
		}
		printf("Sqrt=%d",sqrt);
	}
	getch();
}
