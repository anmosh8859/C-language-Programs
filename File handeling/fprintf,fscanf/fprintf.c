#include<stdio.h>
void main()
{
	int a,b,c;
	FILE *f;
	f=fopen("text.txt","w+");
	if(f==NULL)
		printf("Error! File can't be open");
	scanf("%d%d%d",&a,&b,&c);
	fprintf(f,"%d,%d,%d",a,b,c);
	fclose(f);
}
