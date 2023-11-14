#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("write the number you don't want in your array\n");
	scanf("%d",&n);
	printf("Enter your array\n");
	for(i=0;i<10;i++)
	{
		A:scanf("%d",&a[i]);
		if(a[i]==n)
		{
			printf("Error!  '%d'   Number can't be taken as input\n",n);
			goto A;
		}
	}
	printf("your array:\n");
	for(i=0;i<10;i++)
		printf("a[%d]:%d\n",i,a[i]);
}
