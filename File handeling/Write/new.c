#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	FILE *p;
	char str[100];
	p=fopen("f1.txt","w");
	if(p==NULL)
	{
		printf("Error!File Can't be open.");
		exit(1);
	}
	printf("Enter a string\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
		fputc(str[i],p);
	fclose(p);	
}
