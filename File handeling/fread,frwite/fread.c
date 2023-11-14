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
	f=fopen("file.txt","rb+");
	if(f==NULL)
		printf("Error!");
	while(fread(&b,sizeof(b),1,f)>0)
		printf("Sequence:%d\n title: %s\n price: %f\n",b.sequence,b.title,b.price);
	fclose(f);
	getch();
}
