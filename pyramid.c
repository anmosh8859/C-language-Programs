#include<stdio.h>
#include<conio.h>
void main(){
	int i,j;
	printf("Enter any number to build a pyramid\n");
	scanf("%d",&i);
	for(;i>0;i--){
		for(j=i;j>0;j--){
			if(i%2==0)
				printf("+");
			else
				printf("-");
		}
		printf("\n");
	}
}
