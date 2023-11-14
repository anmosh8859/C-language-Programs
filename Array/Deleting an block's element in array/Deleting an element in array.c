#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("Enter your array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("write the sequence number to be deleted\n");
	scanf("%d",&n);
	printf("your array:\n");
	for(i=(n-1);i<10;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<9;i++)
		printf("a[%d]:%d\n",i,a[i]);
}
