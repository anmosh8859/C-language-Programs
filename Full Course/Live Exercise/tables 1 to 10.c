#include<stdio.h>
#include<conio.h>
int main(){
	int i=1,j;
	for(j=1;j<=10;j++){
		for(i=1;i<=10;i++)
			printf("%d ",i*j);
		printf("\n");
	}
	getch();
}
