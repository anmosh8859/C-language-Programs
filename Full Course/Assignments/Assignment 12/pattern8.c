#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=5;i>=0;i--){
		for(j=i;j>=1;j--)
			printf("%d ",j);
		printf("\n");
	}
	getch();
}
