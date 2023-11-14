#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=i;j<5||j>5;)
		{
			printf(" ");
			if(j<5)
			j++;
			if(j>5)
			j--;
		}
		for(j=2*i-1;j>0&&j<18;)
		{
			printf("*");
			if(i<=5)
			{
			j--;
			}
			if(i>=6)
			{
			j++;
			}
		}
		printf("\n");
	}
}
