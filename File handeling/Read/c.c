#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;
	FILE *f;
	f=fopen("f1.txt","r");
	if(f==NULL)
	{
		printf("Error!File not found");
		exit(1);
	}
	while(!feof(f))
	{
	ch=fgetc(f);
		printf("%c",ch);
	}
}
