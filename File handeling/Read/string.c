#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch[100];
	FILE *f;
	f=fopen("f1.txt","r");
	if(f==NULL)
	{
		printf("Error!File not found");
		exit(1);
	}
	while(fgets(ch,20,f)!=NULL)
	{
		puts(ch);
	}
}
