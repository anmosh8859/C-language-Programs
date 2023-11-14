#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=5;i>-2;i-=2){
		for(j=5-i;j>0;j-=2)
			printf(" ");
		printf("1");
		for(j=i;j>0;j--){
			printf("0");
		}
		if(i>-1)
			printf("1");
		printf("\n");
	}
	getch();
}
