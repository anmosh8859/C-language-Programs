#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*p,j,k,no=1;
	printf("Enter how many number you want to Enter in array\n");
	scanf("%d",&n);
	p=calloc(sizeof(int),n);
	printf("Enter numbers in array: ");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=i+2;k<n;k++)
			{
				if(k==i||k==j)
					continue;
				if(p[i]+p[j]==-p[k])
				{
					printf("Triplet %d: %d %d %d\n",no,p[i],p[j],p[k]);
					no++;
				}
			}
		}
	}
	if(no==1)
		printf("Sorry, No triplets found!");
	free(p);
	getch();
}
