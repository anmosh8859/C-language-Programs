#include<stdio.h>
int main(){
	int i,j;
	for(i=68;i>=65;i--){
		for(j=68;j>i;j--)
			printf(" ");
		for(j=65;j<=i;j++)
			printf("%c",j);
		for(j=(i-1);j>=65;j--)
			printf("%c",j);
		printf("\n");
	}
	getch();
}
