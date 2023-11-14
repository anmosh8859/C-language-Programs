#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20],CGPA;
};
void main()
{
	struct student s;
	char c;
	FILE *p;
	while(1)
	{
		A:printf("Select any option\n1.Enter Info\n2.Read Info\n3.Exit\n");
		scanf("%c",&c);
		if(c!='1'&&c!='2'&&c!='3')
		{
			printf("\nUnidentified Selection!Select Again...\n\n");
			fflush(stdin);
			goto A;
		}
		switch(c)
		{
			case '1':
				p=fopen("txt.dat","ab+");
				if(p==NULL)
				{
					printf("File doesn't exist");
					exit(1);
				}
				fflush(stdin);
				printf("Enter Name: ");
				gets(s.name);
				fflush(stdin);
				printf("Enter Roll Number: ");
				scanf("%d",&s.rollno);
				fflush(stdin);
				printf("Enter CGPA: ");
				scanf("%c",&s.CGPA);
				fwrite(&s,sizeof(s),1,p);
				fclose(p);
				break;
			case '2':
				p=fopen("txt.dat","rb+");
				if(p==NULL)
				{
					printf("File doesn't exist");
					exit(1);
				}
				while(fread(&s,sizeof(s),1,p)>0)
					printf("Name: %s\nRoll No.: %d\nCGPA:%c\n\n",s.name,s.rollno,s.CGPA);
				fclose(p);
				fflush(stdin);
				break;
			case '3':
				exit(0);
		}
		goto A;
	}
	getch();
}