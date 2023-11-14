#include<stdio.h>
int main(){
	int i,j;
	for(i=4;i>=1;i--){
		for(j=i-1;j>=1;j--)
		printf(" ");
		for(j=5-i;j>=1;j--)
			printf("*");
	printf("\n");
	}
	getch();
}
