#include<stdio.h>
void main()
{
	int i,j,a[3][3],lsum=0,rsum=0;
	printf("Enter the numbers in the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Your matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	j=0;
	for(i=0;i<3;i++)
	{
		lsum=lsum+a[i][j];
		j++;
	}
	printf("Sum of Left Diagonal: %d\n",lsum);
	j=2;
	for(i=0;i<3;i++)
	{
		rsum=rsum+a[i][j];
		j--;
	}
	printf("Sum of Right Diagonal: %d",rsum);
	getch();
}
