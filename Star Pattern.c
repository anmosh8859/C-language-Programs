#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d",j);
		}
		for(j=4;j<=4*i-1;)
		{
			printf(" ");
			j=j+2;
		}
		for(j=6-i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
