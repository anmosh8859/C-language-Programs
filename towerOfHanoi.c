#include<stdio.h>
void hanoi(int,char,char,char);
void main()
{
	int n;
	printf("Enter the number of Disks\n");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	getch();
}
void hanoi(int n,char A,char B,char C)
{
	if(n>=1)
	{
		hanoi(n-1,A,C,B);
		printf("%d Disk:%c to %c\n",n,A,C);
		hanoi(n-1,B,A,C);
	}
}
