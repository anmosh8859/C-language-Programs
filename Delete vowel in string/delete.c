#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,n=2;
	printf("Enter any string\n");
	gets(str);
	for(i=0;i<(strlen(str));i++)
	{
		while(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			{
				str[i]=str[i+1];
				for(n=i;n<(strlen(str));n++)
				{
					str[n]=str[n+1];
				}
			}
	}
	//puts(str);        It can also be used.
	for(i=0;i<(strlen(str));i++)
		printf("%c",str[i]);
	getch();
}
