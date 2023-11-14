#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,expr,expw,tn,*nOQ,totalMarks,minusMark;
	char o;
	totalMarks=0;
	printf("Enter the number of question in the paper: ");
	scanf("%d",&tn);
	nOQ=calloc(tn, sizeof(int));
	printf("Enter the constant of ration b/w right marks and wrong marks respectively");
	scanf("%d%d",&expr,&expw);
	minusMark=expr/expw;
	printf("Enter the result of your attempt for various questions as \n wrong: w and \n right: r \n not attempted: n\n"); 
	for(i=0;i<tn;i++){
		printf("Enter the result of your attempt for question no. %d: ",(i+1));
		printf("\n\n %d \n\n",i);
		getch(o);
		putch(o);
		if(o=='r')
			nOQ[i]=expr;
		else if(o=='w')
			nOQ[i]=-(expw/expr);
		else
			nOQ[i]=0;
		totalMarks=totalMarks+nOQ[i];
	}
	printf("Total Marks: %d",totalMarks);
}
