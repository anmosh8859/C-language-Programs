#include<stdio.h>
void main()
{
	int a[32767],i,n;
	printf("How many elements,you wanna enter in array?\n");
	scanf("%d",&n);
	printf("So,Now Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Your Array:\n");
	for(i=0;i<n;i++)
		printf("a[%d]:%d\n",i,a[i]);
	printf("Enter your extra element\n");
	scanf("%d",&a[i]);
	printf("Now your Array is:\n");
	for(i=0;i<=n;i++)
		printf("a[%d]:%d\n",i,a[i]);
}
