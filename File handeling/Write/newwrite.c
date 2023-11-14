#include<stdio.h>
void main()
{
	char str[100];
	FILE *f;
	printf("Enter your Name: ");
	f=fopen("f1.txt","w");
	if(f==NULL)
		printf("Error! the file can't be open");
	gets(str);
	fputs(str,f);
	fclose(f);
}
