#include<stdio.h>
void main()
{
	int i;
	char *p,*q;
	q=&i;
	p=&i+1;
	printf("%d",(p-q));
}
