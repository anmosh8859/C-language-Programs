#include<stdio.h>
void main()
{
	int i,j=0,a[100],b[50],n1,n2;
	printf("How many numbers you want to enter in 1st array\n");
	scanf("%d",&n1);
	printf("Enter numbers in array\n");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("How many numbers you want to enter in 2nd array\n");
	scanf("%d",&n2);
	printf("Enter numbers in array\n");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	for(i=n1;i<(n1+n2);i++)
	{
		a[i]=b[j];
		j++;
	}
	printf("Final Array\n");
	for(i=0;i<(n1+n2);i++)
		printf("%d",a[i]);
		//printf("arr[%d]:%d\n",i,a[i]);
}
