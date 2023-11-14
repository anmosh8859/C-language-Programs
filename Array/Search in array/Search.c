#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,tn,*sizeOfArray;
	printf("How many numbers you want to enter in array\n");
	scanf("%d",&tn);
	sizeOfArray=calloc(tn,2);
	printf("Enter numbers in array\n");
	for(i=0;i<tn;i++)
		scanf("%d",(sizeOfArray+i));
	printf("Enter num which is to be searched\n");
	scanf("%d",&n);
	for(i=0;i<tn;i++)
	{
		if(*(sizeOfArray+i)==n)
		{
			printf("number is present");
			break;
		}
	}
	if(i==tn)
	{
		if(*(sizeOfArray+(i-1))!=n)
		printf("number is not present");
	}
	free(sizeOfArray);
}
