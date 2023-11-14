#include<stdio.h>
#include<string.h>
void swap(char *x,char *y)
{
	char ch;
	ch=*x;
	*x=*y;
	*y=ch;
}
void permutation(char *s,int i,int n)
{
	static int count;
	int j;
	if(i==n)
	{
		count++;
		printf("%d:",count);
		puts(s);
		printf("\n");
	}
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((s+i),(s+j));
			permutation(s,i+1,n);
			swap((s+i),(s+j));
		}
	}
}
void main()
{
	unsigned char str[20];
	printf("Enter the string\n");
	gets(str);
	permutation(str,0,strlen(str)-1);
	getch();
}
