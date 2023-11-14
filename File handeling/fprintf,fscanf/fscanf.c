#include<stdio.h>
void main()
{
	int a,b,c;
	FILE *f;
	f=fopen("text.txt","r");
	if(f==NULL)
		printf("Error!File can't open");
	fscanf(f,"%d,%d,%d",&a,&b,&c);
	fclose(f);
	printf("a= %d,b= %d,c= %d",a,b,c);
}
