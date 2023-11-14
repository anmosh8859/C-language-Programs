#include<stdio.h>
void main()
{
	int a[10],f=0,i,j,n;
	printf("write the number you want to delete in your array\n");
	scanf("%d",&n);
	printf("Enter your array\n");
	for(i=0;i<10;i++)
		A:scanf("%d",&a[i]);
	printf("your array:\n");
	for(i=0;i<10;i++)
	{
		while(a[i]==n)
		{
			a[i]=a[i+1];
			f++;
			for(j=i;j<10;j++)
				a[j]=a[j+1];
		}
	}
	for(i=0;i<(10-f);i++)
		printf("a[%d]:%d\n",i,a[i]);
}
