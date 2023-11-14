#include<stdio.h>
void bin(int n,char *str)
{
	static int count;
	if(n<1)
	{
		count++;
		printf("%d:",count);
		puts(str);
		printf("\n");
	}
	else
	{
		str[n-1]='0';
		bin(n-1,str);
		str[n-1]='1';
		bin(n-1,str);
	}
}
void main()
{
	char str[11];
	str[11]='\0';
	bin(10,str);
	getch();
}
