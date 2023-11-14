#include<stdio.h>
void main()
{
	int a,b,c,d,e,g;
	FILE *f;
	f=fopen("text.txt","w+");
	if(f==NULL)
		printf("Error! File can't be open");
	scanf("%d%d%d",&a,&b,&c);
	fprintf(f,"%d,%d,%d",a,b,c);
	fclose(f);
	f=fopen("text.txt","r");
	if(f==NULL)
		printf("Error! File can't be open");
	fscanf(f,"%d,%d,%d",&d,&e,&g);
	printf("d=%d,e=%d,g=%d",d,e,g);
	fclose(f);
}
