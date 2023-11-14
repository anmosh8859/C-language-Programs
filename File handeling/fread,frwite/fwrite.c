#include<stdio.h>
struct book
{
	int sequence;
	char title[50];
	float price;
};
void main()
{
	struct book b;
	FILE *f;
	f=fopen("file.txt","ab+");
	if(f==NULL)
		printf("Error!");
	printf("Enter the seq no,title and bookId\n");
	scanf("%d",&b.sequence);
	fflush(stdin);
	gets(b.title);
	scanf("%f",&b.price);
	fwrite(&b,sizeof(b),1,f);
	fclose(f);
}
